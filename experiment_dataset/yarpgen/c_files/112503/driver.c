#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned short var_2 = (unsigned short)52675;
unsigned long long int var_4 = 18388684998083921718ULL;
unsigned char var_7 = (unsigned char)28;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)24317;
int zero = 0;
unsigned short var_12 = (unsigned short)7947;
long long int var_13 = -3286559873389333941LL;
unsigned short var_14 = (unsigned short)63597;
void init() {
}

void checksum() {
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
