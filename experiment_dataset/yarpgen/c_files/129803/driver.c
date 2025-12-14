#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16405759594168382542ULL;
unsigned long long int var_1 = 8191302100288224334ULL;
unsigned short var_2 = (unsigned short)33019;
unsigned short var_3 = (unsigned short)63837;
unsigned long long int var_12 = 5514926033952675401ULL;
unsigned short var_13 = (unsigned short)54574;
unsigned long long int var_14 = 15264657696054370078ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)2591;
unsigned long long int var_18 = 4431999781612775074ULL;
unsigned short var_19 = (unsigned short)25162;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
