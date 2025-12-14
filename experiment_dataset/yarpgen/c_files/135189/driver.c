#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)149;
unsigned short var_6 = (unsigned short)56125;
_Bool var_12 = (_Bool)1;
int var_13 = 1481447620;
unsigned long long int var_15 = 8714226382503554779ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -1003873452;
unsigned int var_19 = 2885859730U;
long long int var_20 = 9207576928047148701LL;
void init() {
}

void checksum() {
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
