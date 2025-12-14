#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1854374418;
unsigned int var_2 = 2248691709U;
unsigned char var_3 = (unsigned char)157;
unsigned short var_4 = (unsigned short)14657;
unsigned long long int var_5 = 15787441379112100848ULL;
short var_9 = (short)29790;
int var_10 = 1488714989;
int zero = 0;
int var_12 = 742919410;
int var_13 = -514968641;
signed char var_14 = (signed char)64;
unsigned long long int var_15 = 3915918888195914656ULL;
unsigned int var_16 = 2604051271U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
