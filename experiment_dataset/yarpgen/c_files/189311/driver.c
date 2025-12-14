#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 612010158U;
unsigned int var_7 = 3209465955U;
unsigned int var_9 = 2757204566U;
unsigned short var_13 = (unsigned short)44948;
int zero = 0;
signed char var_16 = (signed char)113;
unsigned long long int var_17 = 14285036373673730184ULL;
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
