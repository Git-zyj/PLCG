#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4566768031305722203LL;
signed char var_1 = (signed char)-107;
unsigned short var_4 = (unsigned short)18250;
long long int var_6 = 4304599915507795007LL;
int var_7 = -14991292;
unsigned int var_8 = 631621398U;
short var_10 = (short)4486;
long long int var_11 = 2128646940126748846LL;
unsigned char var_12 = (unsigned char)24;
int var_13 = 308044761;
int zero = 0;
unsigned short var_16 = (unsigned short)33198;
long long int var_17 = -5685957456591180030LL;
unsigned char var_18 = (unsigned char)253;
short var_19 = (short)27510;
signed char var_20 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
