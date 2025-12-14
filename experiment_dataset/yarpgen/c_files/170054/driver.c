#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_8 = (signed char)19;
unsigned int var_14 = 2798210861U;
int zero = 0;
unsigned char var_16 = (unsigned char)159;
long long int var_17 = 485116570632945270LL;
unsigned short var_18 = (unsigned short)8934;
unsigned long long int var_19 = 15374928928500454656ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
