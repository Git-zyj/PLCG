#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 693629231U;
unsigned char var_1 = (unsigned char)101;
unsigned int var_3 = 153949063U;
unsigned int var_6 = 281497289U;
unsigned char var_8 = (unsigned char)36;
unsigned char var_10 = (unsigned char)250;
unsigned char var_11 = (unsigned char)53;
unsigned int var_12 = 1275829103U;
int zero = 0;
unsigned char var_13 = (unsigned char)26;
unsigned char var_14 = (unsigned char)159;
unsigned char var_15 = (unsigned char)43;
unsigned char var_16 = (unsigned char)167;
unsigned char var_17 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
