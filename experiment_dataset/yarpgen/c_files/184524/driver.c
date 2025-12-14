#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1079165801U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2233734961U;
unsigned int var_12 = 3338375156U;
short var_14 = (short)-32529;
signed char var_15 = (signed char)-118;
int zero = 0;
signed char var_16 = (signed char)-96;
signed char var_17 = (signed char)89;
void init() {
}

void checksum() {
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
