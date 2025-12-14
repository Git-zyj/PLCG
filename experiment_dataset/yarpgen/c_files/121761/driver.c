#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 611169299U;
unsigned int var_1 = 3219814113U;
unsigned int var_5 = 2966129552U;
unsigned int var_6 = 1398175342U;
unsigned int var_7 = 4223699987U;
int zero = 0;
int var_17 = 613735744;
unsigned int var_18 = 2877381366U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
