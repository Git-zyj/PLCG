#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1468002990;
unsigned char var_4 = (unsigned char)20;
_Bool var_9 = (_Bool)1;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-27410;
int zero = 0;
int var_19 = -205175442;
unsigned long long int var_20 = 685604204049508908ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
