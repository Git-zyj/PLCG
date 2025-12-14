#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
signed char var_3 = (signed char)-33;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 2102281704U;
int var_9 = 1903868640;
int zero = 0;
unsigned short var_12 = (unsigned short)40700;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
