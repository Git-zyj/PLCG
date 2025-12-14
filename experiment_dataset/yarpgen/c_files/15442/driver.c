#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21355;
unsigned int var_4 = 2503165142U;
unsigned char var_6 = (unsigned char)15;
int var_7 = -1054971217;
int zero = 0;
int var_10 = 952361255;
unsigned short var_11 = (unsigned short)58337;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
