#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)70;
signed char var_3 = (signed char)63;
int var_9 = -205292303;
unsigned char var_11 = (unsigned char)138;
short var_12 = (short)12550;
_Bool var_14 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)211;
unsigned short var_22 = (unsigned short)7419;
long long int var_23 = -1775454946536919399LL;
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
