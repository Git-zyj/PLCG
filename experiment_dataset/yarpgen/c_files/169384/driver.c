#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3698073527155499526LL;
signed char var_3 = (signed char)96;
unsigned int var_4 = 1725997560U;
unsigned int var_5 = 713180028U;
int var_6 = -1793011472;
unsigned short var_8 = (unsigned short)48203;
long long int var_10 = -7154804489988494258LL;
int zero = 0;
unsigned long long int var_11 = 11857734530939928141ULL;
signed char var_12 = (signed char)-64;
unsigned int var_13 = 1682220536U;
void init() {
}

void checksum() {
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
