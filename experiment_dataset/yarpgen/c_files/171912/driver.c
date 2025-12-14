#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1894740108;
long long int var_4 = 2138392242817030140LL;
short var_6 = (short)8847;
unsigned long long int var_7 = 1709239980042437190ULL;
long long int var_11 = 2665066343560442358LL;
int var_12 = 1021290585;
int zero = 0;
signed char var_14 = (signed char)28;
signed char var_15 = (signed char)-126;
short var_16 = (short)11792;
unsigned short var_17 = (unsigned short)32695;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
