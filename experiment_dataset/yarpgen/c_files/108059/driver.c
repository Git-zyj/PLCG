#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3936707410U;
_Bool var_7 = (_Bool)0;
short var_16 = (short)-25536;
int zero = 0;
unsigned short var_20 = (unsigned short)58954;
unsigned long long int var_21 = 11825418280542423485ULL;
void init() {
}

void checksum() {
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
