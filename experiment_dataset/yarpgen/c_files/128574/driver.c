#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25478;
long long int var_1 = -4564995492284467737LL;
signed char var_2 = (signed char)-13;
int var_8 = -1729027309;
int zero = 0;
unsigned char var_11 = (unsigned char)220;
unsigned short var_12 = (unsigned short)53345;
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
