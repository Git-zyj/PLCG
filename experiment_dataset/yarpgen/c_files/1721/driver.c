#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)15;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 5712060559118150365ULL;
long long int var_17 = -8472712298927282129LL;
signed char var_18 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
