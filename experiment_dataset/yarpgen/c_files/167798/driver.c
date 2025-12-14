#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 578533907581632580ULL;
unsigned char var_3 = (unsigned char)176;
unsigned long long int var_14 = 15528002794604364561ULL;
long long int var_15 = 4251373878297804896LL;
int zero = 0;
unsigned char var_17 = (unsigned char)194;
short var_18 = (short)19499;
unsigned short var_19 = (unsigned short)29228;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
