#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)99;
signed char var_3 = (signed char)-31;
unsigned char var_5 = (unsigned char)78;
unsigned short var_9 = (unsigned short)55122;
signed char var_10 = (signed char)74;
unsigned short var_11 = (unsigned short)24585;
int zero = 0;
short var_13 = (short)16202;
unsigned char var_14 = (unsigned char)99;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
