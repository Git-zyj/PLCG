#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)72;
signed char var_12 = (signed char)-32;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 10582133851872189377ULL;
unsigned short var_17 = (unsigned short)49045;
int zero = 0;
short var_18 = (short)-17048;
unsigned long long int var_19 = 6985625712393662078ULL;
unsigned short var_20 = (unsigned short)4927;
unsigned short var_21 = (unsigned short)13292;
void init() {
}

void checksum() {
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
