#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1880494517U;
int var_7 = -1776113089;
_Bool var_8 = (_Bool)0;
int var_15 = 154693426;
unsigned long long int var_19 = 8597732791702962886ULL;
int zero = 0;
unsigned int var_20 = 604411571U;
int var_21 = -1908212059;
unsigned long long int var_22 = 13955493934108572446ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
