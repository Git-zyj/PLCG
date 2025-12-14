#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)111;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_13 = (unsigned char)219;
unsigned char var_15 = (unsigned char)110;
unsigned char var_16 = (unsigned char)215;
int zero = 0;
unsigned char var_18 = (unsigned char)242;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)1;
unsigned char var_22 = (unsigned char)119;
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
