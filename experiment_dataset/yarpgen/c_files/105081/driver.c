#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37971;
int var_5 = 1032172322;
signed char var_7 = (signed char)77;
unsigned short var_12 = (unsigned short)23422;
unsigned char var_13 = (unsigned char)16;
long long int var_16 = -8468873230041935057LL;
unsigned short var_18 = (unsigned short)51841;
int zero = 0;
unsigned long long int var_19 = 14705716715928476207ULL;
short var_20 = (short)1121;
signed char var_21 = (signed char)117;
unsigned short var_22 = (unsigned short)43301;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
