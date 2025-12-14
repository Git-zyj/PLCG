#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8360817420155486205ULL;
unsigned long long int var_1 = 5463917446106900319ULL;
unsigned int var_5 = 1938219599U;
long long int var_13 = 337926423056812067LL;
int zero = 0;
unsigned long long int var_16 = 10491643869825833396ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-31696;
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
