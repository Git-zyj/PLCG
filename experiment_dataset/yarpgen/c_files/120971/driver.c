#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4380;
short var_2 = (short)-21980;
unsigned int var_6 = 1829332607U;
int var_8 = -710160131;
unsigned long long int var_10 = 9011154285271040857ULL;
int zero = 0;
int var_11 = -1840741894;
signed char var_12 = (signed char)-33;
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
