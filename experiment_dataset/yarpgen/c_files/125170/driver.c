#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1115621766;
short var_1 = (short)-2485;
unsigned char var_3 = (unsigned char)251;
int var_4 = -2090660581;
unsigned long long int var_5 = 7758932347804778383ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)85;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
