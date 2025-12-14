#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5972;
unsigned short var_1 = (unsigned short)20668;
unsigned char var_4 = (unsigned char)115;
int var_5 = 980895689;
int var_6 = -1692121837;
int var_7 = 209272302;
unsigned int var_13 = 2316614336U;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)28;
unsigned long long int var_22 = 12394575333022503016ULL;
void init() {
}

void checksum() {
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
