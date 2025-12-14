#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_7 = 2496441809U;
unsigned int var_16 = 1406979145U;
int var_17 = 1910575815;
long long int var_18 = -2464548325200714143LL;
int zero = 0;
short var_19 = (short)-19315;
unsigned char var_20 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
