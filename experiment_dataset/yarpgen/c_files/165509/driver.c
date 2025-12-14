#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5220;
unsigned char var_5 = (unsigned char)44;
_Bool var_7 = (_Bool)1;
int var_11 = -1463256374;
short var_13 = (short)16812;
int zero = 0;
signed char var_15 = (signed char)69;
short var_16 = (short)26978;
int var_17 = -752688006;
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
