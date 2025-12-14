#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12369733415963123127ULL;
signed char var_10 = (signed char)-51;
unsigned short var_11 = (unsigned short)7793;
int zero = 0;
long long int var_12 = -5868568554550059027LL;
unsigned char var_13 = (unsigned char)107;
void init() {
}

void checksum() {
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
