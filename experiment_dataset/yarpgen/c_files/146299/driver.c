#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2821017336148014307ULL;
unsigned long long int var_9 = 1027911725409404554ULL;
unsigned char var_17 = (unsigned char)66;
int zero = 0;
long long int var_18 = -1317892919450018150LL;
signed char var_19 = (signed char)127;
unsigned long long int var_20 = 6187356659509911862ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
