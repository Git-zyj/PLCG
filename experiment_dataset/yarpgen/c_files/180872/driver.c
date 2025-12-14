#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2378853244U;
int var_2 = 196614489;
unsigned long long int var_4 = 17427888376767553476ULL;
unsigned int var_5 = 3118396329U;
unsigned char var_6 = (unsigned char)67;
unsigned short var_9 = (unsigned short)24555;
int var_11 = -1759755396;
unsigned long long int var_12 = 16363235216870453171ULL;
unsigned char var_14 = (unsigned char)42;
long long int var_16 = -4351938580623888897LL;
int zero = 0;
long long int var_18 = 8582107133467849996LL;
unsigned short var_19 = (unsigned short)35363;
void init() {
}

void checksum() {
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
