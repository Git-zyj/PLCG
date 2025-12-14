#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
unsigned int var_5 = 4090094008U;
_Bool var_11 = (_Bool)0;
long long int var_13 = 7772852048551453947LL;
short var_17 = (short)10870;
int zero = 0;
short var_18 = (short)-8235;
unsigned int var_19 = 1533940239U;
unsigned int var_20 = 582543592U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
