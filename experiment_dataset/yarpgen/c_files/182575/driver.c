#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10384460759292048988ULL;
short var_7 = (short)-16975;
_Bool var_11 = (_Bool)0;
short var_15 = (short)-25940;
unsigned long long int var_16 = 16571013340346971297ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17545658681638564573ULL;
unsigned char var_19 = (unsigned char)114;
unsigned int var_20 = 2048772425U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
