#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
short var_2 = (short)2518;
unsigned short var_6 = (unsigned short)20667;
unsigned int var_8 = 172118804U;
unsigned short var_9 = (unsigned short)3967;
unsigned char var_10 = (unsigned char)65;
long long int var_13 = 8636015719111525803LL;
int zero = 0;
int var_15 = -1575185281;
unsigned int var_16 = 1947883167U;
unsigned char var_17 = (unsigned char)201;
unsigned long long int var_18 = 12941333334510650028ULL;
unsigned char var_19 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
