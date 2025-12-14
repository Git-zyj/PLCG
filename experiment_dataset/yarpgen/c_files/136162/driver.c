#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1630755377;
signed char var_3 = (signed char)102;
unsigned char var_6 = (unsigned char)195;
long long int var_11 = -3410029717851609461LL;
int zero = 0;
unsigned long long int var_12 = 3079690445152220002ULL;
unsigned long long int var_13 = 16828981119361032655ULL;
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
