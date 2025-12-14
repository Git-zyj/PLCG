#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6752064801832471190ULL;
signed char var_2 = (signed char)104;
signed char var_4 = (signed char)21;
short var_5 = (short)29691;
unsigned long long int var_8 = 6553131243493313610ULL;
signed char var_10 = (signed char)-72;
short var_14 = (short)-7319;
int zero = 0;
short var_16 = (short)32584;
short var_17 = (short)14319;
short var_18 = (short)-16104;
unsigned long long int var_19 = 12372551886777472015ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
