#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2949;
unsigned short var_6 = (unsigned short)24303;
long long int var_10 = 5198776481745193275LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5972492972769049951LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
