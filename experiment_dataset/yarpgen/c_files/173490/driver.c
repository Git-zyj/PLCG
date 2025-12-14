#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7435776583286497175ULL;
short var_1 = (short)4290;
int var_2 = -1739154511;
short var_3 = (short)-11073;
unsigned char var_4 = (unsigned char)246;
long long int var_6 = 4683182757277429204LL;
int var_7 = 1149415222;
unsigned int var_9 = 1747467270U;
unsigned short var_11 = (unsigned short)52115;
unsigned char var_12 = (unsigned char)133;
int zero = 0;
signed char var_13 = (signed char)56;
unsigned short var_14 = (unsigned short)10341;
void init() {
}

void checksum() {
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
