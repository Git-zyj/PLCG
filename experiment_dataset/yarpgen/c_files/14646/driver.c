#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-65;
short var_5 = (short)-5633;
signed char var_6 = (signed char)69;
unsigned long long int var_7 = 508926947170926886ULL;
unsigned long long int var_8 = 16555996970956831595ULL;
unsigned char var_9 = (unsigned char)183;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 12538401490475203388ULL;
int zero = 0;
signed char var_19 = (signed char)59;
unsigned char var_20 = (unsigned char)173;
unsigned long long int var_21 = 3251575706098464807ULL;
short var_22 = (short)22969;
unsigned int var_23 = 377538214U;
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
