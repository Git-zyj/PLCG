#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1056907338U;
long long int var_5 = -5897087801211481421LL;
long long int var_6 = -2349245696673101131LL;
unsigned int var_7 = 185047099U;
int zero = 0;
unsigned char var_10 = (unsigned char)249;
unsigned int var_11 = 151443811U;
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
