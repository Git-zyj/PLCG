#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)49;
long long int var_4 = -6979082319077447804LL;
unsigned short var_7 = (unsigned short)53768;
unsigned short var_9 = (unsigned short)40909;
unsigned short var_10 = (unsigned short)44764;
int zero = 0;
unsigned short var_11 = (unsigned short)62954;
unsigned char var_12 = (unsigned char)20;
unsigned char var_13 = (unsigned char)124;
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
