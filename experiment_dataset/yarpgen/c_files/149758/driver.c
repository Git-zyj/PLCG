#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
unsigned short var_6 = (unsigned short)39525;
unsigned char var_15 = (unsigned char)100;
unsigned int var_16 = 88407362U;
unsigned short var_17 = (unsigned short)25765;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2104642290928787437ULL;
int var_20 = 592701167;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
