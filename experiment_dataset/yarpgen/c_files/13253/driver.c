#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1002536144;
unsigned short var_6 = (unsigned short)59644;
signed char var_9 = (signed char)-33;
long long int var_12 = 6532111898925201184LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1656557630934786402ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
