#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -838959449;
long long int var_1 = 7682509437837959159LL;
signed char var_2 = (signed char)52;
long long int var_3 = 7170204259156815512LL;
unsigned short var_6 = (unsigned short)37554;
long long int var_7 = -1061808299243561523LL;
unsigned char var_11 = (unsigned char)27;
unsigned long long int var_12 = 1559405518360276628ULL;
int var_13 = 708869321;
int zero = 0;
unsigned char var_14 = (unsigned char)179;
unsigned int var_15 = 1149829296U;
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
