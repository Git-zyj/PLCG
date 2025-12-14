#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19872;
unsigned char var_6 = (unsigned char)49;
long long int var_12 = -4584190651834303123LL;
int zero = 0;
int var_13 = -1093530171;
unsigned int var_14 = 2978759199U;
short var_15 = (short)1230;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
