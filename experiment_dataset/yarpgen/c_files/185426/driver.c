#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1746495608;
unsigned long long int var_2 = 10614478413433746639ULL;
short var_6 = (short)5247;
long long int var_8 = -8223431126565879786LL;
unsigned char var_10 = (unsigned char)252;
short var_12 = (short)28894;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)43;
unsigned int var_16 = 2907905276U;
signed char var_17 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
