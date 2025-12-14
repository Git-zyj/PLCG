#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2047112029;
int var_3 = -1185601765;
unsigned short var_4 = (unsigned short)33782;
unsigned short var_6 = (unsigned short)18201;
int var_7 = -1716711305;
long long int var_8 = 604690674089187418LL;
unsigned int var_9 = 1435757436U;
unsigned long long int var_10 = 4258099491831064849ULL;
unsigned int var_11 = 1003625323U;
unsigned long long int var_12 = 5273874403556397878ULL;
int var_13 = 197013481;
unsigned short var_14 = (unsigned short)45607;
int zero = 0;
short var_15 = (short)17284;
unsigned short var_16 = (unsigned short)53931;
int var_17 = -947170896;
unsigned int var_18 = 792148833U;
short var_19 = (short)24836;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
