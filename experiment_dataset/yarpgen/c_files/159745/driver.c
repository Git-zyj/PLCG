#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)36;
unsigned short var_12 = (unsigned short)47631;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)139;
unsigned int var_18 = 2856616826U;
int zero = 0;
unsigned int var_19 = 2735690490U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
