#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3772032346U;
unsigned int var_10 = 2069735531U;
long long int var_15 = 6974985518075776724LL;
long long int var_16 = -8937024047466377043LL;
unsigned short var_17 = (unsigned short)53049;
int zero = 0;
int var_18 = 1175594581;
unsigned char var_19 = (unsigned char)0;
long long int var_20 = -1601104625491002633LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -6286747732692239675LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
