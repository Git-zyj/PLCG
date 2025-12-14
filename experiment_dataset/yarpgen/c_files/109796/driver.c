#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2433764874U;
short var_4 = (short)13004;
unsigned short var_7 = (unsigned short)45190;
int zero = 0;
unsigned char var_13 = (unsigned char)148;
int var_14 = 968182941;
unsigned int var_15 = 2702649388U;
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
