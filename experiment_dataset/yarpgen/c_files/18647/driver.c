#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-64;
unsigned long long int var_4 = 7810520593011100885ULL;
unsigned short var_5 = (unsigned short)42553;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)77;
signed char var_9 = (signed char)-36;
signed char var_11 = (signed char)13;
unsigned int var_12 = 2954017697U;
int zero = 0;
unsigned long long int var_14 = 7313116381064165598ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3203716090U;
signed char var_17 = (signed char)-72;
unsigned long long int var_18 = 3597627550492351040ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
