#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54860;
unsigned short var_2 = (unsigned short)50914;
int var_3 = 59044996;
int var_4 = -2055179747;
unsigned char var_7 = (unsigned char)97;
long long int var_8 = -4473508124490481517LL;
unsigned short var_9 = (unsigned short)15065;
unsigned short var_12 = (unsigned short)10500;
int zero = 0;
unsigned short var_16 = (unsigned short)9169;
int var_17 = -1530418811;
unsigned short var_18 = (unsigned short)21990;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
