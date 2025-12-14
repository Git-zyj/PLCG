#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-9;
unsigned char var_4 = (unsigned char)4;
int var_6 = 441136078;
unsigned short var_8 = (unsigned short)41581;
short var_11 = (short)1230;
short var_14 = (short)26903;
unsigned long long int var_17 = 7164442034593756663ULL;
int zero = 0;
signed char var_19 = (signed char)37;
int var_20 = 1297426955;
void init() {
}

void checksum() {
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
