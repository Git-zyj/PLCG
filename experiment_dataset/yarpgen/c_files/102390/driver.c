#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6339673698971723965LL;
unsigned char var_4 = (unsigned char)121;
unsigned int var_11 = 2875058274U;
int zero = 0;
unsigned int var_18 = 794712443U;
unsigned int var_19 = 2969441075U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
