#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_9 = 1940580485498200602ULL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6394725316180462888LL;
long long int var_12 = -6812741580290758873LL;
int zero = 0;
long long int var_13 = -2157918647850434211LL;
unsigned char var_14 = (unsigned char)21;
void init() {
}

void checksum() {
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
