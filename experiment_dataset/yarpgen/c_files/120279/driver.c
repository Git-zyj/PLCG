#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3138465676U;
unsigned short var_1 = (unsigned short)51539;
unsigned long long int var_6 = 4395916498285807011ULL;
unsigned long long int var_8 = 4901713311539597056ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)23053;
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
