#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned char var_1 = (unsigned char)164;
int var_4 = 1519352964;
unsigned int var_5 = 3318315322U;
short var_6 = (short)2482;
signed char var_7 = (signed char)90;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-108;
int zero = 0;
unsigned char var_12 = (unsigned char)203;
long long int var_13 = 2082427799709065240LL;
unsigned short var_14 = (unsigned short)49113;
unsigned long long int var_15 = 9308287108496513003ULL;
void init() {
}

void checksum() {
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
