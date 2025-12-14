#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64145;
unsigned char var_3 = (unsigned char)27;
unsigned long long int var_4 = 11607280125034233902ULL;
unsigned int var_5 = 2074016162U;
long long int var_6 = 3622754038632245607LL;
unsigned int var_7 = 2092197361U;
int zero = 0;
signed char var_10 = (signed char)32;
unsigned short var_11 = (unsigned short)39540;
unsigned short var_12 = (unsigned short)24686;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
