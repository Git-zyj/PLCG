#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6590;
unsigned int var_1 = 3891408351U;
short var_4 = (short)23223;
signed char var_10 = (signed char)41;
int zero = 0;
unsigned long long int var_12 = 3414720057940799738ULL;
signed char var_13 = (signed char)50;
short var_14 = (short)15164;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
