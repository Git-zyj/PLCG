#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1483880809;
signed char var_3 = (signed char)-115;
unsigned short var_5 = (unsigned short)3545;
unsigned short var_6 = (unsigned short)14237;
unsigned short var_7 = (unsigned short)33060;
int var_8 = 1619943930;
unsigned long long int var_13 = 5978985346950819001ULL;
unsigned char var_14 = (unsigned char)63;
long long int var_16 = -8250000305987874700LL;
long long int var_18 = -3603325011156625269LL;
int zero = 0;
short var_19 = (short)22447;
unsigned char var_20 = (unsigned char)237;
unsigned char var_21 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
