#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-22803;
unsigned char var_7 = (unsigned char)204;
unsigned char var_11 = (unsigned char)217;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)120;
unsigned short var_19 = (unsigned short)46661;
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
