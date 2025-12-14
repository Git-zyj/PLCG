#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned short var_3 = (unsigned short)12657;
long long int var_4 = 2546427313926482150LL;
long long int var_5 = -2383773820315681284LL;
unsigned short var_6 = (unsigned short)51005;
long long int var_7 = -8324288633596723239LL;
unsigned short var_8 = (unsigned short)7499;
unsigned int var_10 = 201491092U;
int zero = 0;
unsigned char var_11 = (unsigned char)37;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
