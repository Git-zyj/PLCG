#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 946547976337957449LL;
long long int var_3 = -5205826589081902997LL;
unsigned short var_5 = (unsigned short)40818;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)64;
unsigned int var_18 = 2962378854U;
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
