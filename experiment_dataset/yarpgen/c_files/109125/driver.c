#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7414416980218658215LL;
unsigned long long int var_9 = 12635303504548258887ULL;
unsigned char var_10 = (unsigned char)185;
int zero = 0;
unsigned int var_11 = 3394355354U;
unsigned short var_12 = (unsigned short)59720;
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
