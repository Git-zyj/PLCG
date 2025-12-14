#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_6 = -5448558898490593516LL;
unsigned int var_10 = 1556373543U;
short var_13 = (short)25480;
int zero = 0;
short var_18 = (short)-9549;
unsigned long long int var_19 = 15735264498754547324ULL;
unsigned short var_20 = (unsigned short)13268;
unsigned int var_21 = 3185068996U;
unsigned long long int var_22 = 14471482664867671400ULL;
unsigned char var_23 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
