#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)197;
unsigned long long int var_3 = 14093623768751498388ULL;
unsigned char var_5 = (unsigned char)90;
_Bool var_6 = (_Bool)0;
long long int var_7 = -9035403035515472011LL;
unsigned long long int var_11 = 9982849501808559375ULL;
int var_13 = 1433427341;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)12;
unsigned long long int var_16 = 3386411792232029495ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
