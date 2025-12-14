#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-101;
long long int var_2 = -4949752893197551430LL;
int var_3 = 2133530997;
long long int var_5 = -8504747307477945847LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 3429761054232389869LL;
_Bool var_11 = (_Bool)0;
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
