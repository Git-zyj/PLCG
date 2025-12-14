#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45065;
short var_3 = (short)32296;
unsigned int var_7 = 2550220551U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)87;
int var_12 = 1663447577;
unsigned int var_13 = 3181772953U;
unsigned short var_15 = (unsigned short)19665;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 16005827853058312021ULL;
unsigned long long int var_19 = 6742322178522239067ULL;
int var_20 = 85013679;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
