#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49673;
signed char var_2 = (signed char)45;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)142;
signed char var_8 = (signed char)102;
unsigned short var_13 = (unsigned short)4080;
int var_15 = -1107311249;
_Bool var_16 = (_Bool)1;
int var_17 = 1935655906;
unsigned char var_18 = (unsigned char)100;
unsigned long long int var_19 = 7964634449263765851ULL;
int zero = 0;
signed char var_20 = (signed char)37;
int var_21 = 749456585;
signed char var_22 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
