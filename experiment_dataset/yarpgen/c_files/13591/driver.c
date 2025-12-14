#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
short var_2 = (short)5269;
short var_3 = (short)30238;
unsigned short var_4 = (unsigned short)52291;
unsigned char var_7 = (unsigned char)154;
unsigned short var_8 = (unsigned short)56217;
unsigned int var_12 = 3503302409U;
short var_13 = (short)-23856;
int zero = 0;
unsigned char var_14 = (unsigned char)115;
unsigned char var_15 = (unsigned char)235;
long long int var_16 = 3410263881983159376LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
