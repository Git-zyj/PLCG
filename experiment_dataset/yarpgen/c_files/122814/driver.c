#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24657;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)2620;
long long int var_6 = 2923480713990497357LL;
int var_7 = -999301026;
signed char var_8 = (signed char)53;
_Bool var_10 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = -1465243609;
int var_20 = 849162779;
signed char var_21 = (signed char)125;
_Bool var_22 = (_Bool)1;
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
