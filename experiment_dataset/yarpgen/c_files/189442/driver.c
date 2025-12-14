#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56576;
unsigned int var_2 = 2562757478U;
unsigned long long int var_7 = 4315614781008454761ULL;
unsigned char var_12 = (unsigned char)234;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 782645667143954077ULL;
int zero = 0;
long long int var_17 = -1829882074377451442LL;
signed char var_18 = (signed char)73;
unsigned int var_19 = 1561934200U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
