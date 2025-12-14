#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1390938401;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)64;
unsigned short var_4 = (unsigned short)9053;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)46;
unsigned long long int var_14 = 17455209532314999371ULL;
int zero = 0;
unsigned long long int var_18 = 15201823689418514976ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)69;
signed char var_21 = (signed char)96;
unsigned int var_22 = 2569683069U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
