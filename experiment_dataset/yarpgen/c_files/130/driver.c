#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40564;
unsigned char var_12 = (unsigned char)241;
unsigned char var_13 = (unsigned char)158;
unsigned short var_17 = (unsigned short)62639;
int zero = 0;
unsigned short var_18 = (unsigned short)38591;
unsigned char var_19 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
