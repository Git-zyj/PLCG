#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 47541112U;
unsigned int var_2 = 5213991U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 599836229U;
unsigned int var_8 = 2898723150U;
unsigned int var_9 = 2232908147U;
unsigned int var_10 = 3140430615U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 799620314U;
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
