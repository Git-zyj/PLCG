#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9259;
unsigned int var_1 = 2266102323U;
unsigned int var_3 = 2429779603U;
unsigned int var_4 = 2637984076U;
signed char var_6 = (signed char)-78;
unsigned long long int var_8 = 14120933553322333563ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-78;
unsigned char var_16 = (unsigned char)116;
unsigned int var_17 = 174602249U;
_Bool var_18 = (_Bool)1;
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
