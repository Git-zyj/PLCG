#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
short var_2 = (short)18018;
long long int var_4 = 5311792850024298338LL;
long long int var_8 = 1487939452479479549LL;
short var_11 = (short)-26048;
int zero = 0;
unsigned short var_14 = (unsigned short)2994;
unsigned char var_15 = (unsigned char)114;
unsigned char var_16 = (unsigned char)32;
unsigned char var_17 = (unsigned char)161;
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
