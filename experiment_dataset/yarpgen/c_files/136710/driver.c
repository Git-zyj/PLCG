#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)198;
unsigned char var_6 = (unsigned char)125;
unsigned short var_9 = (unsigned short)62097;
signed char var_13 = (signed char)112;
unsigned short var_14 = (unsigned short)56536;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)83;
signed char var_20 = (signed char)-93;
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
