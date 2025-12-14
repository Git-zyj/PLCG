#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 592610235494811095ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3873060457U;
unsigned short var_7 = (unsigned short)62310;
int var_8 = 2122697304;
unsigned char var_9 = (unsigned char)229;
unsigned char var_10 = (unsigned char)56;
short var_11 = (short)9658;
signed char var_12 = (signed char)-31;
int zero = 0;
short var_13 = (short)31743;
long long int var_14 = -4416360787438083570LL;
signed char var_15 = (signed char)8;
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
