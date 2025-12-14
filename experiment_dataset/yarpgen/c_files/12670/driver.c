#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32398;
short var_7 = (short)-6433;
unsigned char var_8 = (unsigned char)87;
unsigned long long int var_14 = 14126642941629382924ULL;
unsigned int var_16 = 2548594630U;
unsigned char var_17 = (unsigned char)50;
int zero = 0;
unsigned short var_18 = (unsigned short)7562;
long long int var_19 = 3906650609127533492LL;
long long int var_20 = -6183908089331909298LL;
long long int var_21 = -196460230946434005LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
