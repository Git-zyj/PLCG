#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)85;
_Bool var_5 = (_Bool)1;
unsigned char var_16 = (unsigned char)20;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)29495;
short var_21 = (short)16807;
unsigned long long int var_22 = 2412644249460160782ULL;
long long int var_23 = -4626724236211897209LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
