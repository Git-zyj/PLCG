#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42005;
signed char var_5 = (signed char)93;
unsigned char var_6 = (unsigned char)16;
int var_7 = -1658883223;
signed char var_8 = (signed char)73;
int zero = 0;
unsigned char var_14 = (unsigned char)108;
long long int var_15 = -8360801456097176527LL;
long long int var_16 = 8411536871062248776LL;
unsigned long long int var_17 = 1727963496132614954ULL;
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
