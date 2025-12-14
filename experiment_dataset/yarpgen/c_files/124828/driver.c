#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8079333441133238811LL;
unsigned char var_1 = (unsigned char)1;
unsigned short var_4 = (unsigned short)40670;
int var_6 = -859784505;
signed char var_7 = (signed char)-50;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)12956;
unsigned long long int var_10 = 9690280145581491587ULL;
int zero = 0;
unsigned int var_11 = 2010503849U;
unsigned long long int var_12 = 6406321641350910891ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
