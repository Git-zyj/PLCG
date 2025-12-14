#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-24408;
unsigned int var_5 = 2179507811U;
unsigned short var_6 = (unsigned short)25821;
unsigned short var_9 = (unsigned short)31658;
short var_10 = (short)12498;
short var_12 = (short)-23359;
unsigned short var_16 = (unsigned short)32906;
int zero = 0;
unsigned long long int var_18 = 6975478608563098287ULL;
short var_19 = (short)19295;
void init() {
}

void checksum() {
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
