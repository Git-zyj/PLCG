#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 150395746;
unsigned short var_1 = (unsigned short)39787;
unsigned long long int var_2 = 5362898725066671363ULL;
int var_3 = -1636491876;
signed char var_5 = (signed char)31;
unsigned int var_6 = 2324910332U;
int var_7 = -1651452778;
unsigned char var_8 = (unsigned char)22;
short var_9 = (short)-12842;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
unsigned long long int var_13 = 12031841708471040546ULL;
unsigned short var_14 = (unsigned short)41866;
unsigned short var_15 = (unsigned short)26452;
void init() {
}

void checksum() {
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
