#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2328116512409946657LL;
unsigned char var_3 = (unsigned char)6;
unsigned int var_7 = 1640924066U;
long long int var_8 = -7883131482292930939LL;
unsigned long long int var_9 = 1348387194833819535ULL;
int zero = 0;
int var_10 = -718710335;
signed char var_11 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
