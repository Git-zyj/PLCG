#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1775176020905083892ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2646563247U;
unsigned short var_9 = (unsigned short)63398;
int var_11 = 601770095;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)56632;
unsigned char var_15 = (unsigned char)112;
long long int var_16 = 1222208583185881722LL;
void init() {
}

void checksum() {
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
