#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14203;
unsigned char var_3 = (unsigned char)208;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)62967;
signed char var_6 = (signed char)-84;
short var_8 = (short)-742;
signed char var_11 = (signed char)30;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)58;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8416629571690010957LL;
unsigned short var_17 = (unsigned short)20993;
int zero = 0;
unsigned char var_18 = (unsigned char)44;
long long int var_19 = -2558385944895769374LL;
unsigned char var_20 = (unsigned char)59;
unsigned char var_21 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
