#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3683807766U;
unsigned int var_8 = 1901390199U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 17156831600332584483ULL;
unsigned long long int var_11 = 7379385991625402723ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)39192;
int var_13 = -1333043136;
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
