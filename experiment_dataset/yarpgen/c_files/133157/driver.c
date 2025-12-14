#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8340702026166526650LL;
unsigned char var_2 = (unsigned char)175;
unsigned char var_5 = (unsigned char)7;
long long int var_7 = -3379345588186129179LL;
int zero = 0;
unsigned char var_11 = (unsigned char)233;
long long int var_12 = 1667672455006967832LL;
unsigned char var_13 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
