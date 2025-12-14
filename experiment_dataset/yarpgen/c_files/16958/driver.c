#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60363;
_Bool var_7 = (_Bool)1;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)110;
int zero = 0;
unsigned long long int var_16 = 6629319148757936790ULL;
short var_17 = (short)-4203;
short var_18 = (short)-28178;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
