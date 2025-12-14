#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_6 = (unsigned char)133;
unsigned short var_9 = (unsigned short)9724;
unsigned char var_10 = (unsigned char)250;
unsigned int var_11 = 4225319775U;
int var_14 = -1528480487;
long long int var_15 = -4687526546526813541LL;
signed char var_16 = (signed char)65;
unsigned short var_18 = (unsigned short)20291;
int zero = 0;
signed char var_20 = (signed char)47;
int var_21 = -1596539679;
unsigned short var_22 = (unsigned short)43291;
void init() {
}

void checksum() {
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
