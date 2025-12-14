#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14217617011417950807ULL;
unsigned short var_3 = (unsigned short)29852;
unsigned long long int var_4 = 7700811131606235169ULL;
unsigned short var_5 = (unsigned short)8399;
unsigned short var_7 = (unsigned short)11197;
unsigned int var_8 = 1349311888U;
short var_10 = (short)-29302;
unsigned char var_12 = (unsigned char)43;
int zero = 0;
unsigned long long int var_14 = 2771079777196735904ULL;
unsigned char var_15 = (unsigned char)52;
short var_16 = (short)-24243;
_Bool var_17 = (_Bool)0;
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
