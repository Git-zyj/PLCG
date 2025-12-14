#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4395530463046064279ULL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-2519;
long long int var_9 = -5897006876140388948LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)30593;
int zero = 0;
unsigned int var_13 = 394907063U;
unsigned short var_14 = (unsigned short)54398;
unsigned long long int var_15 = 16200687879478207770ULL;
void init() {
}

void checksum() {
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
