#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1069025806;
unsigned long long int var_17 = 17922469923385499285ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2987781370U;
unsigned short var_21 = (unsigned short)21101;
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
