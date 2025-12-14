#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned char var_1 = (unsigned char)53;
int var_2 = 286763561;
short var_3 = (short)-19116;
unsigned char var_4 = (unsigned char)108;
long long int var_5 = 844419971197568825LL;
unsigned char var_6 = (unsigned char)92;
unsigned char var_7 = (unsigned char)114;
unsigned short var_8 = (unsigned short)64702;
int zero = 0;
unsigned short var_10 = (unsigned short)33140;
int var_11 = -1945863565;
unsigned char var_12 = (unsigned char)245;
long long int var_13 = -1777790437384511324LL;
signed char var_14 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
