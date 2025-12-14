#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3048566264U;
unsigned int var_1 = 3658936173U;
signed char var_2 = (signed char)-36;
unsigned int var_7 = 2911171848U;
unsigned char var_9 = (unsigned char)90;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 115007071U;
unsigned short var_15 = (unsigned short)53099;
void init() {
}

void checksum() {
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
