#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13928;
long long int var_5 = -7743550601326413336LL;
unsigned short var_7 = (unsigned short)27686;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -169222789567652273LL;
long long int var_17 = -2878634809332363772LL;
void init() {
}

void checksum() {
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
