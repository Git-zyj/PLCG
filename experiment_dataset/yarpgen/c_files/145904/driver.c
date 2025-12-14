#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9021055688069616125LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 333631509U;
int zero = 0;
unsigned short var_16 = (unsigned short)31245;
unsigned int var_17 = 2209371862U;
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
