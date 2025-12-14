#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)6820;
signed char var_2 = (signed char)-99;
unsigned char var_5 = (unsigned char)36;
unsigned char var_9 = (unsigned char)247;
int zero = 0;
int var_13 = 1277335612;
short var_14 = (short)-25859;
void init() {
}

void checksum() {
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
