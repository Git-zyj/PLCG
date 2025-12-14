#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
long long int var_5 = 5441547486184751972LL;
unsigned int var_7 = 349613232U;
short var_11 = (short)-6630;
unsigned int var_12 = 1393659723U;
int zero = 0;
short var_13 = (short)7322;
unsigned short var_14 = (unsigned short)46667;
unsigned int var_15 = 1399226721U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
