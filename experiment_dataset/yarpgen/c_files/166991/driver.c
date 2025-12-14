#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)231;
unsigned long long int var_2 = 4158716468996032380ULL;
unsigned short var_4 = (unsigned short)61192;
unsigned long long int var_5 = 10321402863108719393ULL;
signed char var_7 = (signed char)-12;
unsigned char var_8 = (unsigned char)24;
short var_10 = (short)1228;
signed char var_12 = (signed char)-86;
int zero = 0;
unsigned char var_13 = (unsigned char)138;
int var_14 = -833121522;
short var_15 = (short)-2805;
unsigned char var_16 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
