#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5188638079110305553ULL;
unsigned short var_4 = (unsigned short)43594;
int var_5 = -1954173579;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = 1812901918;
int var_11 = 1894315580;
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
