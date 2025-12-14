#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12362527325476800370ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)61509;
unsigned int var_8 = 3568971167U;
unsigned char var_10 = (unsigned char)249;
unsigned char var_12 = (unsigned char)39;
int zero = 0;
unsigned long long int var_13 = 8653701550977557760ULL;
unsigned short var_14 = (unsigned short)24046;
unsigned long long int var_15 = 7998715680816875307ULL;
signed char var_16 = (signed char)-106;
unsigned char var_17 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
