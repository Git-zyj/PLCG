#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-97;
unsigned short var_2 = (unsigned short)35415;
signed char var_3 = (signed char)52;
signed char var_5 = (signed char)-56;
int zero = 0;
int var_14 = 519113438;
unsigned char var_15 = (unsigned char)173;
int var_16 = -1827256684;
long long int var_17 = -4955561606906220086LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
