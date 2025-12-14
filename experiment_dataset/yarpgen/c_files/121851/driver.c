#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)37565;
unsigned long long int var_5 = 5178170748775887452ULL;
unsigned long long int var_6 = 3677506878062953589ULL;
unsigned long long int var_7 = 283828741640664594ULL;
long long int var_10 = 1396154402191507646LL;
unsigned int var_11 = 1041056212U;
unsigned short var_12 = (unsigned short)42036;
int var_15 = 1438483198;
int zero = 0;
unsigned short var_16 = (unsigned short)56790;
unsigned short var_17 = (unsigned short)48529;
void init() {
}

void checksum() {
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
