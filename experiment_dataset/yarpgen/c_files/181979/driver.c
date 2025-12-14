#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1001636582;
int var_2 = -1683519753;
int var_3 = -499372584;
unsigned int var_6 = 1051400102U;
signed char var_8 = (signed char)-117;
unsigned short var_10 = (unsigned short)12060;
unsigned short var_13 = (unsigned short)37638;
unsigned int var_14 = 535167989U;
int zero = 0;
unsigned long long int var_16 = 13654958635357898375ULL;
unsigned int var_17 = 4236404830U;
short var_18 = (short)-22927;
short var_19 = (short)4433;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
