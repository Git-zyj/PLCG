#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23525;
unsigned short var_6 = (unsigned short)30965;
long long int var_9 = 3163608723499204734LL;
unsigned short var_11 = (unsigned short)46336;
short var_13 = (short)21602;
int zero = 0;
unsigned long long int var_16 = 16145573092757171244ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5695898572745103202ULL;
long long int var_20 = 2561156576015432412LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
