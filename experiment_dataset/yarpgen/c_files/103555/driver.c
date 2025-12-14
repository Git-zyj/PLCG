#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16771845243494710957ULL;
unsigned long long int var_3 = 4698611587417722540ULL;
int var_10 = 1874236216;
int zero = 0;
unsigned long long int var_13 = 15740203850177191519ULL;
unsigned int var_14 = 2939137360U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)14866;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
