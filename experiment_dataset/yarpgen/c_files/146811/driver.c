#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48372;
int var_2 = 1351531185;
signed char var_3 = (signed char)100;
short var_5 = (short)-26104;
unsigned long long int var_6 = 8859794211628461990ULL;
signed char var_7 = (signed char)61;
unsigned long long int var_10 = 6308641513440921742ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)45385;
signed char var_15 = (signed char)-50;
unsigned short var_16 = (unsigned short)2535;
void init() {
}

void checksum() {
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
