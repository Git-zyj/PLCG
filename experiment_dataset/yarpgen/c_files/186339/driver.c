#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13499;
short var_1 = (short)22796;
unsigned int var_2 = 680555040U;
long long int var_3 = 4350328160044296481LL;
short var_4 = (short)3548;
long long int var_5 = -2264569264124398667LL;
short var_6 = (short)-12377;
unsigned int var_7 = 4238283696U;
short var_8 = (short)-24788;
long long int var_11 = 3867737100150597521LL;
long long int var_13 = 3871561457496741463LL;
short var_14 = (short)-23613;
int zero = 0;
unsigned char var_15 = (unsigned char)29;
unsigned long long int var_16 = 9125727362839522388ULL;
unsigned char var_17 = (unsigned char)243;
int var_18 = 1661026972;
short var_19 = (short)-25573;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
