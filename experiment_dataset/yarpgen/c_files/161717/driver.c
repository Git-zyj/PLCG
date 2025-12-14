#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-100;
unsigned long long int var_8 = 4229015493118604533ULL;
int var_9 = -1276918607;
signed char var_10 = (signed char)40;
unsigned short var_14 = (unsigned short)41343;
unsigned char var_15 = (unsigned char)190;
int zero = 0;
unsigned long long int var_19 = 10458981042531158813ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1527254796U;
signed char var_22 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
