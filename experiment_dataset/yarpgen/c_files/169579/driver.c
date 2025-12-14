#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 1408191190537453180LL;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 331367449U;
unsigned short var_17 = (unsigned short)48144;
int zero = 0;
long long int var_18 = 844086944557830672LL;
long long int var_19 = 7225529149636728553LL;
void init() {
}

void checksum() {
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
