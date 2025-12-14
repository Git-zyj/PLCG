#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3880624359133542909LL;
long long int var_2 = 6441194068090481708LL;
long long int var_3 = 3531179260905088429LL;
_Bool var_5 = (_Bool)1;
short var_9 = (short)7506;
int zero = 0;
int var_11 = -1013045534;
unsigned int var_12 = 957044782U;
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
