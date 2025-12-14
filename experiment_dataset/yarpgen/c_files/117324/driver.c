#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36138;
unsigned short var_8 = (unsigned short)56516;
short var_14 = (short)-16104;
unsigned int var_16 = 3531023089U;
int zero = 0;
long long int var_20 = 8329917784585498761LL;
unsigned long long int var_21 = 16971968945738779598ULL;
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
