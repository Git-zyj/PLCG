#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3595066146U;
unsigned short var_5 = (unsigned short)43025;
short var_6 = (short)-17992;
unsigned long long int var_7 = 10691345448697444076ULL;
int var_8 = -396325976;
unsigned int var_10 = 1037389857U;
unsigned int var_11 = 68439829U;
short var_12 = (short)9156;
int zero = 0;
unsigned short var_15 = (unsigned short)44646;
unsigned int var_16 = 580946553U;
long long int var_17 = 1805625966477747089LL;
_Bool var_18 = (_Bool)1;
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
