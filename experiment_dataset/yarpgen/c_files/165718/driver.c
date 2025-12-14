#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28830;
unsigned short var_4 = (unsigned short)52848;
long long int var_5 = -2214656810589883174LL;
int var_6 = -716542018;
unsigned char var_7 = (unsigned char)194;
unsigned char var_10 = (unsigned char)143;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-86;
int zero = 0;
short var_20 = (short)26829;
unsigned char var_21 = (unsigned char)239;
int var_22 = 1123640492;
unsigned char var_23 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
