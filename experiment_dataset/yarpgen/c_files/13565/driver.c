#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
int var_2 = -1405337609;
int var_4 = -1208505264;
short var_5 = (short)-19715;
_Bool var_6 = (_Bool)1;
int zero = 0;
int var_10 = 605745460;
long long int var_11 = 4442093559292434516LL;
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
