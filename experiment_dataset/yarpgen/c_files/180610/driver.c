#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8480277197085123026ULL;
unsigned long long int var_1 = 14823166992645822864ULL;
signed char var_2 = (signed char)44;
unsigned int var_3 = 2731422826U;
signed char var_4 = (signed char)-88;
short var_6 = (short)-11982;
unsigned char var_9 = (unsigned char)197;
unsigned char var_11 = (unsigned char)63;
_Bool var_16 = (_Bool)0;
short var_18 = (short)-274;
int zero = 0;
signed char var_19 = (signed char)95;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10648108238277782288ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
