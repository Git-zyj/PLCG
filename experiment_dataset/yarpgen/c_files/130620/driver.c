#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 642442909U;
long long int var_5 = 7902850553103392293LL;
long long int var_8 = 6528697776675311375LL;
int zero = 0;
unsigned char var_10 = (unsigned char)250;
unsigned int var_11 = 234266947U;
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
