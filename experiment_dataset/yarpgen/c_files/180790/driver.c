#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 948564826U;
int var_4 = -1095754276;
signed char var_5 = (signed char)20;
unsigned int var_8 = 1139892310U;
_Bool var_9 = (_Bool)1;
unsigned int var_13 = 1840003596U;
int zero = 0;
signed char var_17 = (signed char)96;
unsigned int var_18 = 2520232904U;
void init() {
}

void checksum() {
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
