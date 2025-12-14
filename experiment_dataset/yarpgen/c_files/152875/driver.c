#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1289709406;
signed char var_4 = (signed char)-81;
long long int var_7 = -492131300853799799LL;
int var_9 = 1780923200;
short var_11 = (short)-8924;
unsigned char var_12 = (unsigned char)18;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-1220;
long long int var_16 = 8287060065149629719LL;
unsigned char var_17 = (unsigned char)76;
unsigned char var_18 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
