#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
unsigned long long int var_4 = 17632286536445787624ULL;
unsigned char var_7 = (unsigned char)141;
signed char var_18 = (signed char)28;
int zero = 0;
short var_20 = (short)12953;
unsigned long long int var_21 = 12258398948218940049ULL;
unsigned short var_22 = (unsigned short)59328;
unsigned short var_23 = (unsigned short)11733;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
