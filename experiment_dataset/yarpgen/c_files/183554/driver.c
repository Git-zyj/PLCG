#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17276658290407002077ULL;
long long int var_3 = -2912953666118734066LL;
long long int var_5 = 6973884645496513018LL;
signed char var_6 = (signed char)-6;
unsigned char var_7 = (unsigned char)245;
short var_9 = (short)-3305;
int zero = 0;
int var_10 = -1904119694;
unsigned char var_11 = (unsigned char)242;
long long int var_12 = -4628256567571043681LL;
unsigned int var_13 = 3744911851U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
