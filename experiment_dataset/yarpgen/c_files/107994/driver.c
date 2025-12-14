#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)157;
signed char var_7 = (signed char)111;
signed char var_11 = (signed char)91;
int var_12 = 1406336812;
int var_13 = -1864277912;
unsigned char var_14 = (unsigned char)240;
int zero = 0;
short var_20 = (short)-19274;
long long int var_21 = -307448048874150164LL;
short var_22 = (short)-16991;
signed char var_23 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
