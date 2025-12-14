#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 300452269U;
unsigned int var_3 = 2730049402U;
int var_5 = -981570470;
int var_8 = -820882795;
unsigned long long int var_9 = 12505971304831913289ULL;
int zero = 0;
unsigned long long int var_12 = 5358220742242332308ULL;
short var_13 = (short)13474;
unsigned int var_14 = 4114576564U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
