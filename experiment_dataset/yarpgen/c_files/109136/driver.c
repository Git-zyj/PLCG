#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 591501626U;
unsigned long long int var_2 = 17860803986644455571ULL;
unsigned int var_4 = 2419299188U;
int var_5 = -57266870;
int var_9 = -426058674;
unsigned long long int var_10 = 4079146679291355084ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1332050915;
unsigned short var_16 = (unsigned short)28879;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3061690830U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
