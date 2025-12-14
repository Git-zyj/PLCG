#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6509016063723175889LL;
unsigned char var_2 = (unsigned char)212;
int var_4 = -953387336;
int zero = 0;
long long int var_12 = 7210437292866369693LL;
unsigned short var_13 = (unsigned short)23899;
short var_14 = (short)10783;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
