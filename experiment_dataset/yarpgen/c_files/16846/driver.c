#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2415275818U;
long long int var_2 = -5092618793336469696LL;
unsigned int var_9 = 3402268802U;
signed char var_10 = (signed char)29;
unsigned long long int var_11 = 3138997357949388596ULL;
int zero = 0;
signed char var_12 = (signed char)51;
_Bool var_13 = (_Bool)1;
long long int var_14 = -8052411374582141175LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
