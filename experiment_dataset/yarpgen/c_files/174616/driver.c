#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
short var_1 = (short)24562;
signed char var_2 = (signed char)-60;
unsigned long long int var_3 = 13871977526734687730ULL;
unsigned int var_9 = 2322344137U;
unsigned char var_10 = (unsigned char)197;
short var_12 = (short)25411;
unsigned char var_14 = (unsigned char)34;
int zero = 0;
unsigned long long int var_16 = 6211701367565948518ULL;
long long int var_17 = -2243201724380269512LL;
unsigned short var_18 = (unsigned short)57687;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
