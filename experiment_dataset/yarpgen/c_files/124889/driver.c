#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 370899911;
long long int var_4 = 7728503631645344143LL;
int var_5 = -1434336823;
int var_6 = 1561997038;
unsigned long long int var_8 = 15627250295678448708ULL;
unsigned long long int var_10 = 16479595400171247485ULL;
unsigned char var_12 = (unsigned char)228;
unsigned int var_13 = 2015073801U;
unsigned long long int var_16 = 2288726276281906425ULL;
int zero = 0;
int var_17 = 708575280;
signed char var_18 = (signed char)113;
unsigned int var_19 = 714821586U;
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
