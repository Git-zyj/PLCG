#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -396443505;
unsigned short var_2 = (unsigned short)28174;
int var_3 = -325510527;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -1942687288;
unsigned long long int var_11 = 18445453980819405381ULL;
unsigned long long int var_12 = 8710459138824397428ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
