#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)111;
unsigned short var_3 = (unsigned short)30634;
long long int var_6 = -6477288163602339422LL;
int var_8 = 195382456;
unsigned long long int var_10 = 10216049022137634094ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)15609;
unsigned char var_18 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
