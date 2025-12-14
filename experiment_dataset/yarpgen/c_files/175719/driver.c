#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3867255388386607551ULL;
unsigned char var_2 = (unsigned char)79;
unsigned short var_3 = (unsigned short)29286;
unsigned short var_4 = (unsigned short)51099;
unsigned char var_5 = (unsigned char)129;
short var_6 = (short)-6446;
short var_7 = (short)-26371;
short var_8 = (short)27097;
signed char var_9 = (signed char)35;
short var_10 = (short)-12206;
int var_12 = -140198418;
unsigned long long int var_13 = 6944608937539218742ULL;
short var_14 = (short)-12068;
int var_16 = 278836211;
int zero = 0;
unsigned char var_17 = (unsigned char)214;
long long int var_18 = -618773771340591781LL;
unsigned long long int var_19 = 17104880887697073889ULL;
int var_20 = 2006133066;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
