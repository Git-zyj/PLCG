#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32153;
_Bool var_3 = (_Bool)0;
int var_6 = 1538661876;
unsigned int var_11 = 992952866U;
long long int var_16 = 4932098549871052638LL;
int zero = 0;
long long int var_17 = 7408393505440911294LL;
short var_18 = (short)23738;
unsigned int var_19 = 1655626545U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
