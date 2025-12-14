#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14963;
unsigned char var_3 = (unsigned char)94;
long long int var_5 = 6250886698827960452LL;
unsigned char var_9 = (unsigned char)67;
int zero = 0;
unsigned int var_10 = 3245038484U;
unsigned int var_11 = 741953469U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
