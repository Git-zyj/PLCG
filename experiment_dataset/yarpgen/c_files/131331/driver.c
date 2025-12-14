#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24396;
unsigned int var_1 = 1884157737U;
_Bool var_2 = (_Bool)0;
long long int var_8 = -2587677035846408990LL;
unsigned int var_11 = 1990072041U;
int zero = 0;
long long int var_12 = -5198611737032004874LL;
unsigned long long int var_13 = 1398115251807786654ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
