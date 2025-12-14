#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 4458872395829442058ULL;
signed char var_8 = (signed char)-73;
int var_12 = 519851514;
int zero = 0;
int var_16 = -1144117794;
unsigned int var_17 = 2426907924U;
signed char var_18 = (signed char)-126;
signed char var_19 = (signed char)55;
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
