#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 81661618U;
unsigned long long int var_3 = 13613066415616912568ULL;
long long int var_5 = -2210213494237804175LL;
short var_7 = (short)-19936;
unsigned short var_9 = (unsigned short)56939;
long long int var_15 = 5993455075651385307LL;
unsigned int var_17 = 3854206354U;
int zero = 0;
unsigned int var_19 = 2066728724U;
unsigned short var_20 = (unsigned short)61320;
unsigned int var_21 = 2013534857U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
