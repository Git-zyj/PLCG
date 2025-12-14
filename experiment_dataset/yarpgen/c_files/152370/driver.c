#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
unsigned short var_3 = (unsigned short)59228;
unsigned char var_6 = (unsigned char)17;
signed char var_7 = (signed char)109;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)14076;
unsigned long long int var_13 = 7108290797135267085ULL;
unsigned char var_14 = (unsigned char)218;
unsigned long long int var_15 = 15420089295520812933ULL;
void init() {
}

void checksum() {
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
