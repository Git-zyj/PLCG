#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35316;
unsigned short var_1 = (unsigned short)25854;
unsigned long long int var_2 = 3246692942421098160ULL;
signed char var_3 = (signed char)-88;
short var_4 = (short)-11007;
int var_5 = 1088648403;
unsigned short var_6 = (unsigned short)45250;
unsigned long long int var_8 = 7711909737299086822ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)230;
int var_11 = -1084304164;
unsigned char var_13 = (unsigned char)164;
unsigned char var_14 = (unsigned char)95;
int var_15 = -1095694544;
int zero = 0;
unsigned short var_16 = (unsigned short)29822;
signed char var_17 = (signed char)91;
short var_18 = (short)30751;
unsigned char var_19 = (unsigned char)67;
int var_20 = -1099958314;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
