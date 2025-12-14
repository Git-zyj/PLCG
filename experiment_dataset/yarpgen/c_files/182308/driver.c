#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17946517483671884437ULL;
unsigned long long int var_8 = 318438610470871908ULL;
unsigned long long int var_12 = 17451124335331278826ULL;
unsigned short var_14 = (unsigned short)14095;
unsigned int var_17 = 2488080362U;
int zero = 0;
long long int var_20 = 2931462793352113835LL;
signed char var_21 = (signed char)60;
long long int var_22 = -6710024888154903564LL;
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
