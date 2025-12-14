#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14555600845074987511ULL;
long long int var_5 = 1073274922683860058LL;
unsigned long long int var_7 = 16239613478677392012ULL;
signed char var_14 = (signed char)10;
signed char var_15 = (signed char)122;
unsigned char var_16 = (unsigned char)201;
int zero = 0;
long long int var_18 = -7659317288685613555LL;
long long int var_19 = 7559590534525134677LL;
unsigned char var_20 = (unsigned char)147;
void init() {
}

void checksum() {
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
