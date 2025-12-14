#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
short var_3 = (short)17824;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)1;
int var_8 = 931132105;
short var_11 = (short)-4777;
int zero = 0;
unsigned short var_15 = (unsigned short)26803;
int var_16 = 2026406181;
signed char var_17 = (signed char)-56;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
