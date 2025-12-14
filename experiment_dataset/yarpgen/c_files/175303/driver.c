#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
short var_1 = (short)2707;
unsigned int var_3 = 1282689183U;
signed char var_4 = (signed char)42;
_Bool var_5 = (_Bool)1;
short var_6 = (short)2082;
int var_9 = -1335486523;
int zero = 0;
unsigned char var_10 = (unsigned char)190;
unsigned short var_11 = (unsigned short)18184;
unsigned int var_12 = 347839865U;
unsigned char var_13 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
