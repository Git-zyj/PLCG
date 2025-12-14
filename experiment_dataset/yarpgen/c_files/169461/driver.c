#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-7;
unsigned char var_3 = (unsigned char)161;
int var_7 = 1649253453;
unsigned char var_9 = (unsigned char)158;
unsigned long long int var_10 = 7605139053147595414ULL;
unsigned char var_13 = (unsigned char)14;
int zero = 0;
unsigned short var_16 = (unsigned short)19233;
short var_17 = (short)-23216;
unsigned int var_18 = 657061481U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
