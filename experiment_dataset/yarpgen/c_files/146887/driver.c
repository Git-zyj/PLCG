#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)61;
long long int var_4 = 3008317004884966508LL;
unsigned char var_11 = (unsigned char)63;
unsigned char var_12 = (unsigned char)235;
unsigned short var_13 = (unsigned short)4046;
short var_15 = (short)26687;
int zero = 0;
short var_17 = (short)10101;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1587586795U;
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
