#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1014235253U;
unsigned short var_7 = (unsigned short)36084;
unsigned short var_10 = (unsigned short)61597;
unsigned short var_12 = (unsigned short)57459;
int zero = 0;
unsigned int var_13 = 713449002U;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)14715;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
