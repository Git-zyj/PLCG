#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46960;
unsigned short var_2 = (unsigned short)35065;
unsigned char var_3 = (unsigned char)54;
unsigned char var_4 = (unsigned char)8;
unsigned long long int var_5 = 5467740290912824857ULL;
unsigned short var_6 = (unsigned short)7917;
unsigned char var_8 = (unsigned char)226;
signed char var_10 = (signed char)25;
unsigned short var_13 = (unsigned short)13238;
int zero = 0;
unsigned int var_14 = 4260023754U;
unsigned char var_15 = (unsigned char)231;
unsigned int var_16 = 457263522U;
unsigned long long int var_17 = 7979832288350104808ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
