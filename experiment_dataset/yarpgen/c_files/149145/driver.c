#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)3365;
unsigned short var_3 = (unsigned short)50022;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)115;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)106;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)1518;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)23722;
unsigned char var_14 = (unsigned char)101;
unsigned char var_15 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
