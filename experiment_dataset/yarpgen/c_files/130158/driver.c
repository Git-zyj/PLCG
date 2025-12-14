#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 584448540541367327LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_9 = 4482549211495198230LL;
int zero = 0;
long long int var_11 = 5793573106922449259LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
