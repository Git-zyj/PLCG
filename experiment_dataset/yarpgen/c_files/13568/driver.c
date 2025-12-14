#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
int var_1 = 930938789;
unsigned char var_3 = (unsigned char)16;
int var_4 = 1123933920;
int var_6 = -187109821;
unsigned char var_9 = (unsigned char)33;
unsigned char var_10 = (unsigned char)175;
int zero = 0;
int var_14 = -84480835;
unsigned char var_15 = (unsigned char)83;
int var_16 = -1043564748;
int var_17 = -2099600809;
int var_18 = -122855267;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
