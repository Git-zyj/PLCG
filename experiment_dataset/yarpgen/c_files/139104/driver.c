#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1867857088U;
unsigned int var_4 = 546170323U;
int var_7 = 492932417;
unsigned int var_9 = 1039863823U;
int zero = 0;
unsigned int var_10 = 1112544408U;
unsigned short var_11 = (unsigned short)13519;
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
