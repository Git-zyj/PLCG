#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29780;
unsigned char var_1 = (unsigned char)191;
unsigned long long int var_8 = 385046094126101534ULL;
int var_11 = -1630162620;
short var_12 = (short)17340;
short var_14 = (short)-15160;
int zero = 0;
short var_15 = (short)-25714;
long long int var_16 = -7946362230984386956LL;
unsigned long long int var_17 = 1724682701797051716ULL;
unsigned char var_18 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
