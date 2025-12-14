#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned long long int var_2 = 17648138315774520247ULL;
unsigned long long int var_4 = 16903372375621493829ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-2;
signed char var_8 = (signed char)-82;
signed char var_9 = (signed char)1;
signed char var_10 = (signed char)96;
unsigned char var_11 = (unsigned char)89;
int zero = 0;
signed char var_12 = (signed char)112;
int var_13 = 2076379648;
int var_14 = 542905521;
unsigned int var_15 = 2768372905U;
unsigned int var_16 = 2563534638U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
