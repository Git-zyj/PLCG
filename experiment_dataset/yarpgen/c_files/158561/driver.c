#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1542837872U;
signed char var_3 = (signed char)33;
unsigned char var_5 = (unsigned char)57;
signed char var_9 = (signed char)-54;
unsigned int var_10 = 548719083U;
signed char var_11 = (signed char)-26;
int zero = 0;
signed char var_14 = (signed char)-95;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
