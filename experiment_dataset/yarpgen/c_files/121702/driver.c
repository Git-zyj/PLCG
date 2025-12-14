#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50664;
unsigned short var_2 = (unsigned short)60161;
unsigned short var_6 = (unsigned short)274;
unsigned short var_7 = (unsigned short)44968;
unsigned short var_10 = (unsigned short)37719;
int zero = 0;
unsigned short var_16 = (unsigned short)41467;
unsigned short var_17 = (unsigned short)46790;
void init() {
}

void checksum() {
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
