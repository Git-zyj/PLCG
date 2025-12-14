#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10113125611116052206ULL;
long long int var_10 = -8915870265670731493LL;
signed char var_14 = (signed char)-23;
signed char var_15 = (signed char)-15;
unsigned short var_16 = (unsigned short)64552;
int zero = 0;
unsigned char var_17 = (unsigned char)20;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15720695909502515359ULL;
unsigned char var_20 = (unsigned char)83;
short var_21 = (short)-13227;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
