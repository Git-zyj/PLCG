#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 13339071437795824681ULL;
unsigned long long int var_10 = 4495861534880612786ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)31619;
unsigned long long int var_17 = 13669555093193838436ULL;
unsigned char var_18 = (unsigned char)127;
unsigned short var_19 = (unsigned short)21323;
unsigned long long int var_20 = 17825910864612784666ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
