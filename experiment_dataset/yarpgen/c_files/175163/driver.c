#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8314806981474893408LL;
long long int var_6 = 197046300188289519LL;
unsigned char var_7 = (unsigned char)245;
int zero = 0;
unsigned int var_11 = 4163298172U;
unsigned short var_12 = (unsigned short)2358;
unsigned char var_13 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
