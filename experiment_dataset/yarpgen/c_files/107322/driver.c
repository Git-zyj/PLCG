#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30463;
short var_9 = (short)12662;
unsigned short var_16 = (unsigned short)48747;
int zero = 0;
unsigned short var_17 = (unsigned short)28310;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 14605114681661864468ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
