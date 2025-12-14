#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14398585247101646778ULL;
short var_6 = (short)16775;
unsigned long long int var_7 = 9050249635647933211ULL;
int var_8 = 820872817;
int var_10 = 478468055;
int var_11 = -113828841;
signed char var_14 = (signed char)59;
int var_15 = -784398943;
int zero = 0;
unsigned short var_16 = (unsigned short)33186;
unsigned long long int var_17 = 14969953804620993798ULL;
unsigned long long int var_18 = 1875305459018286767ULL;
void init() {
}

void checksum() {
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
