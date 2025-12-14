#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9183746250128871788LL;
signed char var_7 = (signed char)47;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_17 = -586197975;
short var_18 = (short)-6360;
unsigned long long int var_19 = 6319606957962481454ULL;
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
