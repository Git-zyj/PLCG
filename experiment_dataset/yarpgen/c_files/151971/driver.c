#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16261620306519717813ULL;
unsigned long long int var_7 = 12063306824077529012ULL;
unsigned char var_11 = (unsigned char)138;
unsigned short var_12 = (unsigned short)25259;
short var_15 = (short)-16085;
int zero = 0;
unsigned int var_18 = 1369794729U;
unsigned char var_19 = (unsigned char)32;
unsigned short var_20 = (unsigned short)48669;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
