#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3682904179U;
_Bool var_2 = (_Bool)1;
int var_3 = 1618362374;
unsigned int var_5 = 3925861951U;
unsigned int var_6 = 923078694U;
unsigned short var_7 = (unsigned short)19117;
int zero = 0;
short var_10 = (short)30230;
signed char var_11 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
