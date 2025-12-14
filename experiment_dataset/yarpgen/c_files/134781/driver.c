#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_5 = 37410652;
unsigned short var_6 = (unsigned short)55687;
int var_7 = 1929255628;
signed char var_8 = (signed char)4;
long long int var_9 = 7733807544288801769LL;
short var_12 = (short)-17532;
signed char var_13 = (signed char)-16;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7969751103454039810LL;
int var_17 = 1842992507;
int zero = 0;
unsigned int var_19 = 3090629681U;
unsigned char var_20 = (unsigned char)82;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)2954;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
