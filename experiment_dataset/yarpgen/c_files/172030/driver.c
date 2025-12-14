#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2174540476457672053ULL;
signed char var_5 = (signed char)-30;
long long int var_10 = -8764571029566179357LL;
int zero = 0;
short var_12 = (short)-16134;
long long int var_13 = -895065974842589201LL;
unsigned int var_14 = 3078811638U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
