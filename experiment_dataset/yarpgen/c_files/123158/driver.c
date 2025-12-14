#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = -1891909470158648882LL;
unsigned char var_5 = (unsigned char)79;
signed char var_9 = (signed char)60;
int var_10 = 1295402537;
int zero = 0;
unsigned char var_12 = (unsigned char)101;
long long int var_13 = -2646070050374947188LL;
unsigned int var_14 = 141011374U;
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
