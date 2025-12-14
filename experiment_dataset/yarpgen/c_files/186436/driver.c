#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1248605578103509827LL;
unsigned long long int var_1 = 7780121340569789439ULL;
short var_3 = (short)12044;
short var_5 = (short)-8146;
int var_13 = 841957112;
_Bool var_16 = (_Bool)0;
int var_17 = 687984822;
int zero = 0;
unsigned int var_20 = 1856770610U;
unsigned long long int var_21 = 18094354247936150989ULL;
unsigned long long int var_22 = 4604843804299678474ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
