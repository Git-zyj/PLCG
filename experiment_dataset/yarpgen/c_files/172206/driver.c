#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
long long int var_5 = -5861547334755491056LL;
unsigned long long int var_15 = 4749762776598622064ULL;
int zero = 0;
signed char var_19 = (signed char)-46;
unsigned short var_20 = (unsigned short)33157;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
