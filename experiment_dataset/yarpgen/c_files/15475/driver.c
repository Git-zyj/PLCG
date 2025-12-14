#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 137749622014302546LL;
long long int var_9 = 88198894896948907LL;
unsigned short var_13 = (unsigned short)45920;
int zero = 0;
unsigned long long int var_16 = 16626233171115002150ULL;
unsigned char var_17 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
