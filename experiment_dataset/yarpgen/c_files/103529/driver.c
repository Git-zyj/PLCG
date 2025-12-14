#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1964546709972603532ULL;
int var_1 = -291998951;
int var_2 = 2130899660;
int var_4 = 1926658024;
unsigned char var_7 = (unsigned char)227;
unsigned long long int var_11 = 16119623853322864768ULL;
unsigned long long int var_13 = 15649699136363028741ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -1826384070631073611LL;
unsigned int var_17 = 739189052U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
