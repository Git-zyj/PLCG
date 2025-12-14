#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7429285181725864239ULL;
int var_6 = 1608214157;
unsigned long long int var_7 = 8836535541730001672ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)191;
signed char var_15 = (signed char)-45;
void init() {
}

void checksum() {
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
