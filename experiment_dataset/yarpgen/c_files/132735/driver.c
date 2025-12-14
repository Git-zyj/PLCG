#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6750186478337470233ULL;
unsigned char var_5 = (unsigned char)254;
unsigned int var_9 = 2157198026U;
int zero = 0;
int var_11 = 1294066807;
unsigned int var_12 = 4222389894U;
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
