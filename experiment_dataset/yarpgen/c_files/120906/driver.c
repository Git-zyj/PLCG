#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1299452977;
long long int var_1 = -2141137994820323972LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)14317;
signed char var_5 = (signed char)-2;
unsigned short var_6 = (unsigned short)49388;
unsigned short var_7 = (unsigned short)53788;
int var_8 = -1900465246;
unsigned long long int var_9 = 6732867163626420677ULL;
int zero = 0;
long long int var_11 = 2110624409059367657LL;
unsigned long long int var_12 = 12268954446180482614ULL;
unsigned char var_13 = (unsigned char)155;
long long int var_14 = -8820699697175906349LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
