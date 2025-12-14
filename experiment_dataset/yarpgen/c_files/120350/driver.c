#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12766722341183438518ULL;
long long int var_4 = -790365780621776467LL;
_Bool var_7 = (_Bool)1;
long long int var_15 = 1538464769382900750LL;
int zero = 0;
long long int var_16 = 7429040645674246331LL;
unsigned char var_17 = (unsigned char)206;
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
