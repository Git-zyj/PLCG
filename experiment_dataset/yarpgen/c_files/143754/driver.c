#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9259834655431932218ULL;
unsigned char var_9 = (unsigned char)250;
unsigned int var_17 = 3852403958U;
unsigned int var_18 = 3732227593U;
int zero = 0;
unsigned int var_20 = 3185718190U;
int var_21 = 1329564059;
unsigned int var_22 = 1118397811U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
