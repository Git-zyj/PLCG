#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
int var_6 = -580699091;
signed char var_7 = (signed char)76;
long long int var_12 = 1676468311311565307LL;
unsigned char var_15 = (unsigned char)255;
int zero = 0;
unsigned short var_17 = (unsigned short)21919;
unsigned short var_18 = (unsigned short)38175;
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
