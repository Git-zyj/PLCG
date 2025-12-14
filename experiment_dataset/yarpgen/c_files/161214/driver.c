#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 39959750U;
int var_1 = 24076183;
unsigned int var_2 = 868348218U;
long long int var_8 = 6983359618468510503LL;
int zero = 0;
signed char var_13 = (signed char)111;
int var_14 = 364215402;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
