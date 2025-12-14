#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_5 = -5378948058543019185LL;
long long int var_6 = -6133566287539883882LL;
unsigned int var_7 = 1112839361U;
signed char var_8 = (signed char)-101;
signed char var_9 = (signed char)30;
signed char var_10 = (signed char)38;
int var_12 = -2079955329;
unsigned long long int var_13 = 7727693737980789904ULL;
int zero = 0;
unsigned int var_14 = 1891974615U;
unsigned short var_15 = (unsigned short)36918;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
