#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -471613163;
unsigned long long int var_8 = 11484447238697496659ULL;
unsigned long long int var_13 = 8195919612989047861ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 716156385U;
int var_19 = -2093031568;
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
