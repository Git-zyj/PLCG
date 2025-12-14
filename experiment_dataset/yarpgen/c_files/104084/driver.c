#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)3521;
long long int var_7 = -516438136172479963LL;
long long int var_11 = 1906099287515809922LL;
int zero = 0;
unsigned long long int var_14 = 16068347071805008857ULL;
unsigned char var_15 = (unsigned char)197;
signed char var_16 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
