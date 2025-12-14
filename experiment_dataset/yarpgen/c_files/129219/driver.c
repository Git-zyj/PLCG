#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6381;
_Bool var_5 = (_Bool)0;
long long int var_9 = 7673443394862633924LL;
unsigned int var_15 = 2282179968U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
