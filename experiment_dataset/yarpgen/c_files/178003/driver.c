#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
unsigned short var_4 = (unsigned short)41899;
unsigned short var_5 = (unsigned short)54838;
unsigned int var_7 = 1862065843U;
int var_9 = 1704560346;
_Bool var_10 = (_Bool)0;
unsigned char var_15 = (unsigned char)226;
signed char var_16 = (signed char)12;
int zero = 0;
long long int var_17 = -3678441836929438107LL;
unsigned char var_18 = (unsigned char)89;
unsigned int var_19 = 2068146172U;
short var_20 = (short)-23997;
unsigned short var_21 = (unsigned short)43392;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
