#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9579544534516899700ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)70;
_Bool var_4 = (_Bool)0;
int var_5 = -358348873;
unsigned int var_8 = 3411397128U;
int var_9 = -679502681;
unsigned char var_10 = (unsigned char)124;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13215248933159040898ULL;
signed char var_13 = (signed char)87;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
