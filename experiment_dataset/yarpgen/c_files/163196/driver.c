#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7859408031881571075LL;
unsigned short var_1 = (unsigned short)34790;
unsigned short var_5 = (unsigned short)6295;
unsigned short var_6 = (unsigned short)25409;
long long int var_8 = 1967363057624630728LL;
unsigned short var_9 = (unsigned short)12276;
short var_10 = (short)22290;
int zero = 0;
int var_11 = 408212575;
signed char var_12 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
