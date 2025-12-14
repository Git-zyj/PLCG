#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)217;
int var_4 = -135402925;
short var_8 = (short)27376;
int var_14 = -44885861;
unsigned short var_15 = (unsigned short)38476;
unsigned short var_18 = (unsigned short)56935;
int zero = 0;
unsigned long long int var_20 = 12873747277570201471ULL;
unsigned long long int var_21 = 12782371004999646718ULL;
int var_22 = 1496569371;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
