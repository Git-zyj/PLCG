#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-21761;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1920165406U;
unsigned char var_6 = (unsigned char)176;
int var_8 = -1542588306;
unsigned int var_9 = 1238269664U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16269314292296767265ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 58205927;
long long int var_15 = 4115571011405869783LL;
int var_16 = -1819481218;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
