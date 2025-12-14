#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3298305833794187887LL;
unsigned int var_2 = 2802177390U;
unsigned int var_7 = 2384207220U;
long long int var_8 = -7124642124655621777LL;
unsigned int var_10 = 4198650330U;
unsigned int var_13 = 4184840108U;
unsigned int var_15 = 423672925U;
unsigned int var_16 = 2948045794U;
int zero = 0;
unsigned int var_20 = 1435194933U;
unsigned int var_21 = 2528038081U;
unsigned int var_22 = 1651456725U;
long long int var_23 = 4747755652839366435LL;
short var_24 = (short)-6855;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
