#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2132238382713417914LL;
signed char var_4 = (signed char)-120;
int var_5 = -1112607421;
short var_8 = (short)-14357;
signed char var_12 = (signed char)-92;
int zero = 0;
unsigned long long int var_16 = 15074676551891827566ULL;
signed char var_17 = (signed char)63;
_Bool var_18 = (_Bool)0;
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
