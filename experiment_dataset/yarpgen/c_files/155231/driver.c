#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1874549273;
unsigned int var_8 = 2951633931U;
unsigned char var_11 = (unsigned char)130;
short var_13 = (short)30529;
signed char var_16 = (signed char)41;
unsigned long long int var_17 = 13114744545239041202ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = 306376027;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-29919;
unsigned int var_23 = 881412203U;
void init() {
}

void checksum() {
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
