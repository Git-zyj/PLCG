#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36476;
unsigned long long int var_7 = 3181878179448118254ULL;
int var_10 = 743900289;
short var_11 = (short)-20152;
int zero = 0;
int var_15 = 211721645;
unsigned long long int var_16 = 3649527236898249339ULL;
int var_17 = -1936013206;
unsigned char var_18 = (unsigned char)125;
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
