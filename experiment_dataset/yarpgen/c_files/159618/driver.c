#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16172987929683091253ULL;
long long int var_13 = 5543590283796811216LL;
int var_14 = 571902071;
int zero = 0;
unsigned int var_15 = 2943011175U;
unsigned long long int var_16 = 17204990063978071740ULL;
unsigned long long int var_17 = 18363232617434079002ULL;
void init() {
}

void checksum() {
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
