#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31620;
unsigned short var_5 = (unsigned short)53161;
unsigned int var_7 = 344161956U;
unsigned char var_8 = (unsigned char)127;
unsigned long long int var_10 = 1491020696413571777ULL;
short var_11 = (short)22316;
short var_14 = (short)-26237;
int zero = 0;
unsigned long long int var_15 = 7099408721365550259ULL;
unsigned long long int var_16 = 5168551739664871878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
