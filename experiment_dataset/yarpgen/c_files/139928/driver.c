#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35014;
short var_2 = (short)-13166;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)47465;
int zero = 0;
short var_10 = (short)-16082;
unsigned char var_11 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
