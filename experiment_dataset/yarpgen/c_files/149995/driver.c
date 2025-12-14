#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-8946;
signed char var_7 = (signed char)-100;
signed char var_8 = (signed char)-22;
int zero = 0;
unsigned long long int var_11 = 832911770806117911ULL;
unsigned long long int var_12 = 15449246907684586561ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
