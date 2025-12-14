#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2484665774U;
int var_2 = -699040839;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 15665292493263388735ULL;
int zero = 0;
unsigned long long int var_10 = 18203997104088904233ULL;
unsigned int var_11 = 3920397679U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
