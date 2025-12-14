#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2035306588;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)24;
int zero = 0;
unsigned char var_20 = (unsigned char)227;
unsigned long long int var_21 = 15887991553257499502ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
