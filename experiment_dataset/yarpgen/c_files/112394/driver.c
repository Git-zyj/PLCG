#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3872575178U;
_Bool var_8 = (_Bool)1;
unsigned char var_16 = (unsigned char)76;
int zero = 0;
long long int var_17 = 1504291666839630557LL;
int var_18 = -1357799049;
long long int var_19 = -8111933347345424131LL;
long long int var_20 = 1442124344496503960LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
