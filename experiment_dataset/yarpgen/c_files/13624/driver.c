#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3585005183U;
unsigned long long int var_4 = 4088759229165868877ULL;
unsigned char var_12 = (unsigned char)69;
int zero = 0;
long long int var_14 = 3287687837855194546LL;
int var_15 = 688213810;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
