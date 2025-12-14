#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2843094509U;
_Bool var_4 = (_Bool)0;
int var_5 = -1255770973;
unsigned int var_6 = 2108839534U;
unsigned short var_7 = (unsigned short)50156;
_Bool var_10 = (_Bool)0;
long long int var_12 = -3690631816104306194LL;
int zero = 0;
long long int var_13 = -6332304277742133268LL;
unsigned short var_14 = (unsigned short)38463;
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
