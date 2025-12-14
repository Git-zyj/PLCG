#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1588151320;
short var_2 = (short)-9466;
long long int var_5 = -2367649169790808231LL;
signed char var_8 = (signed char)88;
int zero = 0;
long long int var_10 = -41086739980662751LL;
int var_11 = 669127667;
unsigned short var_12 = (unsigned short)18491;
unsigned long long int var_13 = 1041403609158521355ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
