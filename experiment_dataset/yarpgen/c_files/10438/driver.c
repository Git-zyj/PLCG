#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6578855758832986557LL;
_Bool var_8 = (_Bool)1;
int var_14 = 1763974563;
int zero = 0;
unsigned char var_16 = (unsigned char)72;
unsigned char var_17 = (unsigned char)107;
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
