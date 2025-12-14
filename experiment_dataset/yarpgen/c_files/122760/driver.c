#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33006;
unsigned short var_3 = (unsigned short)6519;
unsigned short var_4 = (unsigned short)60920;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)31770;
unsigned short var_11 = (unsigned short)46408;
unsigned char var_12 = (unsigned char)230;
int zero = 0;
unsigned short var_18 = (unsigned short)30683;
int var_19 = -1333807313;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)31520;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
