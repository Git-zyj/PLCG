#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1751145975459337215LL;
long long int var_6 = -2046503009891629086LL;
int zero = 0;
signed char var_13 = (signed char)75;
unsigned char var_14 = (unsigned char)172;
unsigned int var_15 = 1605051014U;
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
