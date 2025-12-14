#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3077580707U;
unsigned long long int var_3 = 10872200175802978473ULL;
int var_7 = 936062928;
int var_8 = -750918826;
unsigned long long int var_9 = 16625772465020101011ULL;
unsigned int var_11 = 359558238U;
int zero = 0;
unsigned int var_16 = 3063184913U;
int var_17 = 443113897;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
