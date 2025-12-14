#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13929;
unsigned char var_4 = (unsigned char)216;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)222;
unsigned char var_13 = (unsigned char)3;
signed char var_14 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
