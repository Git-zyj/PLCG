#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2482590424U;
signed char var_4 = (signed char)-11;
unsigned int var_14 = 2248949131U;
int zero = 0;
unsigned char var_16 = (unsigned char)56;
long long int var_17 = -4576062596786066307LL;
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
