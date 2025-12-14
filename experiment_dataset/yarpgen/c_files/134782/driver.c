#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)51;
unsigned long long int var_4 = 11472481566468271243ULL;
signed char var_6 = (signed char)27;
signed char var_8 = (signed char)65;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1412083926U;
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
