#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4813;
short var_1 = (short)16669;
signed char var_3 = (signed char)1;
signed char var_4 = (signed char)-33;
int var_6 = 2097072836;
signed char var_8 = (signed char)100;
int zero = 0;
signed char var_10 = (signed char)123;
short var_11 = (short)556;
unsigned char var_12 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
