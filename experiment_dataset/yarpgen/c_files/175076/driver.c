#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6794202776788125796ULL;
unsigned short var_1 = (unsigned short)57055;
unsigned char var_2 = (unsigned char)15;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14635028357732744974ULL;
long long int var_5 = 3523016087919685269LL;
unsigned char var_8 = (unsigned char)72;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)5024;
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
