#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2009374253;
unsigned int var_2 = 3166393170U;
signed char var_3 = (signed char)55;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 360288581U;
unsigned char var_10 = (unsigned char)184;
unsigned long long int var_11 = 12501964716387557443ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-59;
unsigned int var_15 = 2807507329U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
