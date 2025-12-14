#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 259159410;
unsigned short var_1 = (unsigned short)29872;
_Bool var_2 = (_Bool)0;
long long int var_3 = -6044376352283289606LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 16184698333426833863ULL;
unsigned short var_6 = (unsigned short)61907;
short var_9 = (short)29734;
short var_10 = (short)-23286;
long long int var_11 = 4367036414421130652LL;
unsigned long long int var_14 = 3454972123082958921ULL;
int zero = 0;
int var_15 = -1651655554;
int var_16 = 1852319384;
short var_17 = (short)28543;
unsigned char var_18 = (unsigned char)104;
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
