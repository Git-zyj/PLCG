#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14479;
signed char var_1 = (signed char)18;
signed char var_3 = (signed char)-65;
unsigned long long int var_4 = 14025308342411142552ULL;
unsigned short var_6 = (unsigned short)48887;
unsigned long long int var_8 = 12597048315427949060ULL;
int var_13 = -1334582318;
long long int var_15 = -160328309476821728LL;
signed char var_16 = (signed char)-7;
int zero = 0;
unsigned char var_17 = (unsigned char)191;
unsigned long long int var_18 = 16768887477096521946ULL;
long long int var_19 = 265355557280130043LL;
void init() {
}

void checksum() {
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
