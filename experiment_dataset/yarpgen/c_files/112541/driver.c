#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
int var_8 = -1624661633;
int zero = 0;
unsigned short var_10 = (unsigned short)34179;
unsigned long long int var_11 = 5661449575994328076ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
