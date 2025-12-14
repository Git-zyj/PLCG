#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)3541;
signed char var_10 = (signed char)-118;
int var_11 = -1589077036;
unsigned int var_12 = 1115886810U;
int zero = 0;
unsigned char var_13 = (unsigned char)159;
unsigned char var_14 = (unsigned char)159;
unsigned char var_15 = (unsigned char)184;
signed char var_16 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
