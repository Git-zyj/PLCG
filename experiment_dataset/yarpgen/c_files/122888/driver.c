#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12769469380403137853ULL;
unsigned int var_5 = 362815152U;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_11 = (short)7878;
unsigned char var_12 = (unsigned char)137;
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
