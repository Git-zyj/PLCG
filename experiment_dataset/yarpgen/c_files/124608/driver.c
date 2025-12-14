#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)161;
unsigned short var_3 = (unsigned short)29190;
int var_6 = 859026836;
unsigned long long int var_8 = 6424267860338611885ULL;
signed char var_10 = (signed char)52;
unsigned char var_12 = (unsigned char)36;
int zero = 0;
signed char var_15 = (signed char)74;
unsigned char var_16 = (unsigned char)105;
unsigned int var_17 = 1202623603U;
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
