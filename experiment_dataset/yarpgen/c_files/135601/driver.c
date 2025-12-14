#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56178;
unsigned short var_4 = (unsigned short)9217;
unsigned char var_7 = (unsigned char)105;
unsigned long long int var_10 = 3600412789532078372ULL;
unsigned char var_11 = (unsigned char)44;
int zero = 0;
unsigned char var_14 = (unsigned char)119;
unsigned char var_15 = (unsigned char)46;
unsigned short var_16 = (unsigned short)45525;
unsigned long long int var_17 = 8753427629561114407ULL;
void init() {
}

void checksum() {
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
