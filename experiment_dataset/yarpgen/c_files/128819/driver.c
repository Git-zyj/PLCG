#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)15;
unsigned char var_6 = (unsigned char)153;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)58;
unsigned char var_11 = (unsigned char)30;
_Bool var_13 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 16792098292974810227ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 826014148210132489ULL;
void init() {
}

void checksum() {
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
