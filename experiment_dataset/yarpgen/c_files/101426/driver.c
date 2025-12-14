#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3314291589987091780LL;
long long int var_8 = 6231995742867944800LL;
unsigned int var_10 = 1049386978U;
int zero = 0;
short var_18 = (short)-25497;
unsigned int var_19 = 2811226901U;
long long int var_20 = 6995484605132831805LL;
void init() {
}

void checksum() {
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
