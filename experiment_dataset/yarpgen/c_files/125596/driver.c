#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)44264;
_Bool var_6 = (_Bool)0;
unsigned long long int var_12 = 16328493911060226621ULL;
unsigned long long int var_18 = 13497785183473885540ULL;
int zero = 0;
unsigned int var_19 = 1989421565U;
signed char var_20 = (signed char)-61;
void init() {
}

void checksum() {
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
