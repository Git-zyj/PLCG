#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1306601450U;
short var_1 = (short)-5856;
unsigned char var_2 = (unsigned char)216;
unsigned char var_3 = (unsigned char)201;
unsigned char var_4 = (unsigned char)155;
short var_5 = (short)-21414;
int var_6 = 697462264;
unsigned int var_7 = 2269942999U;
unsigned long long int var_9 = 17695755888112714734ULL;
short var_10 = (short)11731;
int zero = 0;
unsigned char var_13 = (unsigned char)97;
unsigned char var_14 = (unsigned char)23;
unsigned int var_15 = 1682577044U;
unsigned char var_16 = (unsigned char)52;
unsigned char var_17 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
