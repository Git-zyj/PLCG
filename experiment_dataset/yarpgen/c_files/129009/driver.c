#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned char var_1 = (unsigned char)0;
unsigned long long int var_2 = 13427472979834851081ULL;
unsigned int var_8 = 614344053U;
unsigned char var_9 = (unsigned char)18;
int zero = 0;
unsigned char var_11 = (unsigned char)28;
unsigned char var_12 = (unsigned char)9;
unsigned char var_13 = (unsigned char)44;
int var_14 = -1895668777;
int var_15 = -1963014439;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
