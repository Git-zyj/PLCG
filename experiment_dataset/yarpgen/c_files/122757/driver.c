#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -585523498;
unsigned short var_1 = (unsigned short)5530;
int var_2 = 1408082311;
int var_3 = 1146052635;
unsigned char var_4 = (unsigned char)83;
long long int var_5 = -3301445069645170328LL;
unsigned short var_6 = (unsigned short)63730;
unsigned char var_7 = (unsigned char)159;
signed char var_9 = (signed char)-116;
unsigned short var_11 = (unsigned short)40306;
unsigned short var_12 = (unsigned short)56872;
unsigned long long int var_13 = 4580138790756829686ULL;
int var_14 = -1187790039;
int zero = 0;
unsigned char var_15 = (unsigned char)7;
unsigned short var_16 = (unsigned short)23483;
unsigned long long int var_17 = 12947834222589543035ULL;
int var_18 = -601959815;
void init() {
}

void checksum() {
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
