#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7852;
_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 9649424519566544115ULL;
int zero = 0;
int var_12 = -1010825247;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2542130471U;
int var_15 = 460361512;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
