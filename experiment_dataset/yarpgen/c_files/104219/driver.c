#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23165;
_Bool var_2 = (_Bool)0;
unsigned short var_9 = (unsigned short)31042;
unsigned short var_11 = (unsigned short)3706;
int zero = 0;
unsigned short var_15 = (unsigned short)65160;
unsigned short var_16 = (unsigned short)8086;
unsigned char var_17 = (unsigned char)161;
void init() {
}

void checksum() {
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
