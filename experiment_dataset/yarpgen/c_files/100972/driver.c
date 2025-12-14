#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28849;
int var_2 = 2130103519;
unsigned short var_6 = (unsigned short)38729;
long long int var_7 = -7858630666154862427LL;
unsigned int var_10 = 3823324905U;
int zero = 0;
unsigned char var_17 = (unsigned char)203;
unsigned long long int var_18 = 2680870426887737703ULL;
void init() {
}

void checksum() {
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
