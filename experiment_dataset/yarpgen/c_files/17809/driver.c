#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1647946639;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1231350078U;
int var_8 = -1694773009;
_Bool var_10 = (_Bool)0;
unsigned char var_17 = (unsigned char)64;
unsigned int var_18 = 1360851275U;
int zero = 0;
long long int var_20 = -5219395599219524418LL;
unsigned int var_21 = 1151949271U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
