#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
signed char var_2 = (signed char)-85;
unsigned char var_4 = (unsigned char)80;
short var_5 = (short)-30732;
long long int var_7 = 2467274193258966004LL;
unsigned short var_12 = (unsigned short)5253;
unsigned int var_13 = 721565101U;
int zero = 0;
signed char var_20 = (signed char)-6;
unsigned short var_21 = (unsigned short)52795;
void init() {
}

void checksum() {
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
