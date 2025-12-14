#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3438147865856659144ULL;
long long int var_5 = 2827450887675092778LL;
short var_6 = (short)30333;
signed char var_7 = (signed char)-58;
int var_8 = 787038409;
short var_11 = (short)27668;
short var_12 = (short)14989;
int zero = 0;
unsigned short var_14 = (unsigned short)36406;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
