#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
signed char var_7 = (signed char)106;
unsigned short var_9 = (unsigned short)9190;
unsigned int var_10 = 1847145899U;
int zero = 0;
unsigned int var_11 = 1289870392U;
long long int var_12 = -3540054622933829659LL;
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
