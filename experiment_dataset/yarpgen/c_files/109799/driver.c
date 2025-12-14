#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18128;
unsigned short var_3 = (unsigned short)24717;
unsigned long long int var_4 = 15183612384084038443ULL;
unsigned int var_7 = 1458765030U;
unsigned int var_10 = 4052769576U;
unsigned long long int var_14 = 9921565917843158652ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)59;
unsigned int var_20 = 3859605764U;
int var_21 = 403586499;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
