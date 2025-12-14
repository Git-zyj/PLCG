#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
unsigned short var_2 = (unsigned short)11922;
unsigned char var_4 = (unsigned char)227;
unsigned char var_6 = (unsigned char)172;
unsigned short var_7 = (unsigned short)9933;
int var_10 = -466939865;
int zero = 0;
int var_16 = -2074282900;
signed char var_17 = (signed char)59;
_Bool var_18 = (_Bool)1;
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
