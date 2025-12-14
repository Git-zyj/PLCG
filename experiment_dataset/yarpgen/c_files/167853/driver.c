#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17583;
long long int var_1 = 5423756532200102253LL;
unsigned short var_2 = (unsigned short)34910;
unsigned char var_3 = (unsigned char)48;
unsigned short var_5 = (unsigned short)39866;
unsigned char var_7 = (unsigned char)153;
unsigned int var_8 = 598581347U;
unsigned short var_10 = (unsigned short)8430;
unsigned char var_11 = (unsigned char)124;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 4088398002U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
