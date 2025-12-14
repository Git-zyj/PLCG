#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -314550435;
short var_1 = (short)-14438;
signed char var_3 = (signed char)45;
signed char var_5 = (signed char)-127;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 2540894919920973524ULL;
unsigned char var_8 = (unsigned char)61;
unsigned char var_9 = (unsigned char)186;
_Bool var_10 = (_Bool)1;
short var_11 = (short)22767;
int var_12 = 1322571185;
unsigned char var_13 = (unsigned char)58;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
short var_16 = (short)27587;
int zero = 0;
unsigned short var_17 = (unsigned short)9397;
int var_18 = -333207829;
unsigned short var_19 = (unsigned short)44363;
unsigned int var_20 = 1671370281U;
signed char var_21 = (signed char)-29;
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
