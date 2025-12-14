#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3680193846U;
long long int var_1 = 109934448805855649LL;
long long int var_4 = 4062109676046567995LL;
signed char var_7 = (signed char)-93;
unsigned long long int var_8 = 14338844868865235594ULL;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
unsigned long long int var_11 = 16836097039849979089ULL;
unsigned short var_12 = (unsigned short)63242;
unsigned short var_13 = (unsigned short)30387;
unsigned int var_14 = 3312307330U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
