#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1159286844;
long long int var_5 = -6617321678076633657LL;
unsigned long long int var_9 = 5408305002380020463ULL;
int zero = 0;
unsigned int var_13 = 3032435874U;
unsigned char var_14 = (unsigned char)159;
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
