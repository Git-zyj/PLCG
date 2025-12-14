#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3882251198U;
long long int var_2 = -6471875060470584013LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 10024809768884423702ULL;
unsigned char var_16 = (unsigned char)35;
unsigned long long int var_17 = 4306245445818215436ULL;
unsigned short var_18 = (unsigned short)39478;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
