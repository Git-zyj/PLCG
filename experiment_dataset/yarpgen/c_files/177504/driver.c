#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38875;
unsigned int var_2 = 3031760575U;
unsigned long long int var_3 = 11234017757860940604ULL;
unsigned char var_4 = (unsigned char)150;
unsigned int var_10 = 3596904242U;
long long int var_13 = -1392240849470557760LL;
int zero = 0;
unsigned char var_14 = (unsigned char)226;
unsigned char var_15 = (unsigned char)51;
void init() {
}

void checksum() {
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
