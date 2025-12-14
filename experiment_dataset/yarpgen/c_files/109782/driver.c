#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1206890856;
unsigned char var_2 = (unsigned char)29;
unsigned long long int var_5 = 13812917217772857019ULL;
unsigned short var_14 = (unsigned short)16981;
unsigned char var_15 = (unsigned char)143;
unsigned char var_16 = (unsigned char)198;
int var_17 = 558623194;
signed char var_18 = (signed char)-74;
int zero = 0;
unsigned short var_19 = (unsigned short)41506;
short var_20 = (short)-2415;
int var_21 = -1110103824;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
