#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)242;
unsigned int var_3 = 1835493374U;
signed char var_4 = (signed char)55;
long long int var_8 = 3146884243102762818LL;
signed char var_10 = (signed char)101;
unsigned int var_13 = 2731134477U;
int zero = 0;
long long int var_14 = 8874000724797096792LL;
signed char var_15 = (signed char)-93;
int var_16 = -188085355;
unsigned int var_17 = 1641349069U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
