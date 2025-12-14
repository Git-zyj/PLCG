#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1651729591;
long long int var_3 = -5758796477213718431LL;
long long int var_5 = 7627293322029427782LL;
int var_8 = 670228442;
int var_10 = 764297654;
unsigned int var_11 = 2232200564U;
unsigned int var_17 = 1053172474U;
int zero = 0;
long long int var_19 = -3285718485972460802LL;
_Bool var_20 = (_Bool)1;
int var_21 = 1078903888;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
