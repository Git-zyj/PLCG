#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 878957020U;
unsigned long long int var_10 = 18266987278308429035ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_15 = 3437628837303615061ULL;
long long int var_16 = -350895093784813640LL;
int zero = 0;
long long int var_19 = 8909741259930145964LL;
unsigned long long int var_20 = 9503511518475509385ULL;
_Bool var_21 = (_Bool)1;
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
