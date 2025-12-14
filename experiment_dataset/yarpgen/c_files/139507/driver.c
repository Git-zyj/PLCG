#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 710770135U;
unsigned long long int var_8 = 16382296915940974440ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)12552;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)23;
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
