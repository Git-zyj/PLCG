#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33711;
long long int var_1 = -8733605597492661676LL;
long long int var_2 = -4035370944261599291LL;
long long int var_3 = -4549321374758690748LL;
short var_5 = (short)-12196;
signed char var_8 = (signed char)-2;
unsigned short var_9 = (unsigned short)22672;
long long int var_11 = -837348771054107175LL;
unsigned char var_12 = (unsigned char)92;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)20993;
short var_15 = (short)23979;
signed char var_16 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
