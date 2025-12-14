#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)232;
unsigned int var_6 = 1009470786U;
_Bool var_7 = (_Bool)1;
int var_8 = 2071664852;
int zero = 0;
int var_11 = 272117841;
signed char var_12 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
