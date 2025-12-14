#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1875941161;
signed char var_5 = (signed char)46;
unsigned char var_6 = (unsigned char)173;
unsigned long long int var_9 = 13854681045296667560ULL;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-20419;
unsigned char var_15 = (unsigned char)203;
signed char var_17 = (signed char)-107;
int zero = 0;
unsigned long long int var_19 = 15513147558763928487ULL;
short var_20 = (short)6053;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
