#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1469633802662681135LL;
signed char var_13 = (signed char)-41;
unsigned short var_14 = (unsigned short)45318;
int zero = 0;
unsigned int var_15 = 3220830537U;
unsigned char var_16 = (unsigned char)82;
unsigned char var_17 = (unsigned char)224;
void init() {
}

void checksum() {
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
