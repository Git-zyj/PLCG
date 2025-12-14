#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_6 = -6374046995494393577LL;
int var_7 = 313173064;
unsigned short var_10 = (unsigned short)55564;
signed char var_13 = (signed char)112;
unsigned char var_16 = (unsigned char)254;
int var_17 = 1355533116;
int zero = 0;
unsigned char var_18 = (unsigned char)168;
unsigned char var_19 = (unsigned char)229;
void init() {
}

void checksum() {
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
