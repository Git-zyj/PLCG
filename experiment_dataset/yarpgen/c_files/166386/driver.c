#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7085532149080866269ULL;
long long int var_1 = -6685143573532023594LL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)63;
unsigned char var_6 = (unsigned char)225;
short var_8 = (short)4256;
signed char var_10 = (signed char)-89;
unsigned char var_11 = (unsigned char)210;
int zero = 0;
short var_12 = (short)-8089;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-85;
signed char var_15 = (signed char)52;
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
