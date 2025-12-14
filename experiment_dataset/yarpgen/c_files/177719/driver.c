#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35445;
unsigned short var_4 = (unsigned short)58076;
unsigned short var_9 = (unsigned short)43426;
unsigned short var_17 = (unsigned short)8665;
int zero = 0;
unsigned short var_19 = (unsigned short)14564;
unsigned short var_20 = (unsigned short)28122;
unsigned short var_21 = (unsigned short)44387;
void init() {
}

void checksum() {
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
