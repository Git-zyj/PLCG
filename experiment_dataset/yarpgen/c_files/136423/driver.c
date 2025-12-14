#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
long long int var_6 = 7200066978654289284LL;
unsigned long long int var_10 = 4994258390430120404ULL;
long long int var_12 = 4230515357187870510LL;
int var_13 = -1638223035;
int zero = 0;
unsigned char var_15 = (unsigned char)127;
short var_16 = (short)-27294;
int var_17 = 753866270;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
