#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
short var_3 = (short)3751;
unsigned long long int var_4 = 1467897808596049124ULL;
unsigned short var_8 = (unsigned short)15518;
int zero = 0;
unsigned short var_12 = (unsigned short)37568;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)2891;
unsigned char var_15 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
