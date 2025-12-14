#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2688782276112225689LL;
unsigned int var_2 = 1056929320U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1680901356U;
signed char var_8 = (signed char)20;
unsigned int var_9 = 83727546U;
int zero = 0;
unsigned char var_11 = (unsigned char)5;
short var_12 = (short)20701;
unsigned int var_13 = 3043385135U;
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
