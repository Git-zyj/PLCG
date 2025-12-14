#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15535055457819048542ULL;
signed char var_3 = (signed char)-107;
short var_7 = (short)8444;
long long int var_10 = 2542902899481471308LL;
_Bool var_11 = (_Bool)0;
unsigned char var_16 = (unsigned char)15;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)58224;
long long int var_21 = -8280737706584277013LL;
unsigned long long int var_22 = 14387065873939342628ULL;
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
