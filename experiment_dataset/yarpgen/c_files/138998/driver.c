#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2784809362U;
unsigned char var_9 = (unsigned char)44;
unsigned int var_11 = 2982800215U;
int zero = 0;
long long int var_15 = -2836537732478948174LL;
long long int var_16 = -4860581140513823916LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
