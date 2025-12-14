#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11530294503488048629ULL;
long long int var_1 = -1148869093235563582LL;
unsigned int var_2 = 590677001U;
unsigned long long int var_3 = 7959775910025120952ULL;
unsigned long long int var_4 = 8398234758082006594ULL;
signed char var_5 = (signed char)99;
unsigned long long int var_6 = 3274657812175387926ULL;
int var_7 = 363117246;
short var_8 = (short)8528;
unsigned long long int var_9 = 10153115120729214820ULL;
short var_10 = (short)-28550;
unsigned short var_13 = (unsigned short)41924;
int zero = 0;
unsigned char var_14 = (unsigned char)5;
unsigned int var_15 = 1106219344U;
unsigned short var_16 = (unsigned short)62507;
short var_17 = (short)3173;
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
