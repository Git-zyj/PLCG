#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57996;
int var_1 = -454099231;
short var_2 = (short)11950;
unsigned int var_3 = 2727736408U;
unsigned short var_4 = (unsigned short)65043;
int var_5 = -1611980170;
signed char var_6 = (signed char)101;
int var_7 = -711166193;
signed char var_8 = (signed char)-3;
unsigned char var_9 = (unsigned char)203;
signed char var_11 = (signed char)-14;
int var_12 = -1364095112;
unsigned short var_13 = (unsigned short)37740;
int zero = 0;
int var_14 = -232360776;
unsigned short var_15 = (unsigned short)34659;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
