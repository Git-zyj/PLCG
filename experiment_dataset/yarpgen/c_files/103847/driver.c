#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-70;
unsigned char var_4 = (unsigned char)23;
long long int var_5 = -773238366813547401LL;
long long int var_9 = 2613570308630256432LL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3277198100U;
int zero = 0;
unsigned short var_12 = (unsigned short)59103;
unsigned int var_13 = 3423071113U;
long long int var_14 = -5269740376904804871LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
