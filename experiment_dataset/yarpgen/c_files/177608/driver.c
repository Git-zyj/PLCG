#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1718743831U;
signed char var_2 = (signed char)-104;
unsigned short var_3 = (unsigned short)37370;
unsigned long long int var_4 = 12355312358668491357ULL;
unsigned int var_5 = 953158432U;
unsigned int var_7 = 2379150387U;
unsigned long long int var_8 = 6574273139596567208ULL;
signed char var_9 = (signed char)20;
unsigned long long int var_10 = 952669870432977162ULL;
unsigned int var_13 = 3594944022U;
unsigned short var_14 = (unsigned short)48628;
unsigned long long int var_17 = 13324031518076737500ULL;
int zero = 0;
unsigned long long int var_18 = 9176606307875989336ULL;
unsigned long long int var_19 = 17670766180180491960ULL;
long long int var_20 = 7131085094382855997LL;
unsigned char var_21 = (unsigned char)24;
unsigned short var_22 = (unsigned short)44645;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
