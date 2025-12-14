#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_10 = (short)7885;
unsigned int var_11 = 2621279977U;
int zero = 0;
unsigned short var_16 = (unsigned short)59332;
unsigned long long int var_17 = 11832851522221270779ULL;
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
