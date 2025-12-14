#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)44;
long long int var_7 = -7438457356901259610LL;
long long int var_13 = -9208226712365344553LL;
unsigned short var_14 = (unsigned short)23336;
int zero = 0;
long long int var_15 = -5949167335973227527LL;
int var_16 = -1376712673;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
