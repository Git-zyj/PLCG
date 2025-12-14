#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7003099764934610785LL;
unsigned short var_11 = (unsigned short)30158;
unsigned short var_12 = (unsigned short)50879;
unsigned long long int var_14 = 324516982871941496ULL;
int var_17 = -758352855;
int zero = 0;
unsigned int var_18 = 3676370182U;
long long int var_19 = -8579082036413155191LL;
long long int var_20 = 4292011408521473796LL;
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
