#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3894269307U;
unsigned short var_1 = (unsigned short)30398;
signed char var_2 = (signed char)75;
int var_3 = 234699470;
signed char var_5 = (signed char)105;
signed char var_7 = (signed char)-39;
unsigned int var_8 = 3281977257U;
unsigned int var_9 = 586364704U;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-30;
unsigned int var_12 = 1102005747U;
unsigned short var_13 = (unsigned short)23997;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
