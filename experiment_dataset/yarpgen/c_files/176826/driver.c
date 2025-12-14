#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28905;
signed char var_3 = (signed char)-75;
unsigned int var_4 = 789241264U;
signed char var_5 = (signed char)-44;
signed char var_6 = (signed char)37;
unsigned int var_8 = 1749498779U;
signed char var_10 = (signed char)-46;
unsigned int var_11 = 2503383171U;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
unsigned short var_14 = (unsigned short)50155;
short var_15 = (short)-1396;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
