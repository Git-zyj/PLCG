#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1971885988;
short var_4 = (short)13090;
long long int var_7 = 965535790056472230LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-117;
short var_20 = (short)-838;
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
