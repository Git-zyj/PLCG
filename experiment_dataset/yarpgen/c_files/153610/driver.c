#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13371284714279728042ULL;
unsigned long long int var_18 = 3368626612117053826ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)200;
unsigned long long int var_21 = 7562952740105799047ULL;
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
