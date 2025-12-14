#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6961602367313591201LL;
unsigned long long int var_3 = 4974008150045338531ULL;
unsigned long long int var_4 = 5635833714680646066ULL;
long long int var_5 = 3893745044550850540LL;
unsigned long long int var_9 = 1708863668604706353ULL;
int zero = 0;
unsigned long long int var_12 = 5487082553658330504ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
