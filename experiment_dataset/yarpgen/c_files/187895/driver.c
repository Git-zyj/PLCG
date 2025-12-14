#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1004225881U;
unsigned long long int var_2 = 731033651074878073ULL;
long long int var_6 = -2917148529944950868LL;
unsigned char var_12 = (unsigned char)117;
short var_14 = (short)18396;
int zero = 0;
unsigned int var_17 = 2693959782U;
unsigned short var_18 = (unsigned short)21847;
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
