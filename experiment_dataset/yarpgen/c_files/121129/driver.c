#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5878870605608945742ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-32283;
unsigned char var_8 = (unsigned char)122;
unsigned char var_10 = (unsigned char)61;
int zero = 0;
unsigned short var_20 = (unsigned short)57326;
int var_21 = -1690304133;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
