#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2279681315113111924LL;
long long int var_4 = 3052177276062182571LL;
long long int var_5 = -1357199588253491955LL;
unsigned int var_12 = 2418124209U;
signed char var_13 = (signed char)-12;
int zero = 0;
long long int var_15 = -2932953282475557457LL;
signed char var_16 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
