#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3667004620U;
short var_7 = (short)18651;
unsigned char var_16 = (unsigned char)252;
int zero = 0;
unsigned long long int var_18 = 390679118917305720ULL;
long long int var_19 = -1020711042849687784LL;
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
