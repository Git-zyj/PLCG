#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -328567705;
unsigned char var_7 = (unsigned char)178;
long long int var_11 = 1280914053405955772LL;
int zero = 0;
unsigned int var_13 = 2293019398U;
long long int var_14 = -4706028067159881311LL;
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
