#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1175964633;
unsigned int var_4 = 2144039995U;
unsigned int var_9 = 3956352659U;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 3692918907U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5211877346647337744ULL;
int var_17 = -675719193;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
