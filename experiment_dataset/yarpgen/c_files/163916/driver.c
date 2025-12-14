#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)77;
unsigned long long int var_6 = 4988482749688598599ULL;
unsigned long long int var_10 = 11059119254837845436ULL;
unsigned char var_14 = (unsigned char)80;
int zero = 0;
int var_15 = 979798955;
unsigned char var_16 = (unsigned char)121;
unsigned char var_17 = (unsigned char)175;
unsigned long long int var_18 = 15793872414588732052ULL;
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
