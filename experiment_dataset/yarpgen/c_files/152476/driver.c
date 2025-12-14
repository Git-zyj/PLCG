#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60913;
unsigned int var_3 = 1393468858U;
unsigned long long int var_5 = 15303691784738503034ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)26453;
unsigned char var_15 = (unsigned char)102;
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
