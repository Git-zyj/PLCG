#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48059;
unsigned int var_1 = 3405478897U;
unsigned long long int var_3 = 4966111060075380139ULL;
short var_6 = (short)-23867;
signed char var_10 = (signed char)43;
signed char var_11 = (signed char)76;
long long int var_13 = 5181595449092433422LL;
int zero = 0;
long long int var_15 = 314920297016412306LL;
signed char var_16 = (signed char)30;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)74;
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
