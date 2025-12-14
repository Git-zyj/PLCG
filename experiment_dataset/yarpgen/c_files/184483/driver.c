#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1515992696;
signed char var_1 = (signed char)21;
int var_4 = -1553794391;
unsigned long long int var_6 = 8262675553445519799ULL;
unsigned short var_11 = (unsigned short)32616;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 3419490944U;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 7408641075790286852ULL;
unsigned int var_21 = 196818002U;
short var_22 = (short)3740;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
