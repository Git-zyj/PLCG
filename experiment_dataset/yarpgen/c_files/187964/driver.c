#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5194;
unsigned short var_2 = (unsigned short)42106;
unsigned char var_5 = (unsigned char)8;
int var_6 = 241970729;
short var_7 = (short)10298;
unsigned int var_9 = 3119414923U;
int var_11 = -1205119748;
long long int var_12 = 6134572707048467243LL;
short var_13 = (short)20456;
int zero = 0;
int var_14 = -935276965;
unsigned short var_15 = (unsigned short)50263;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)58125;
signed char var_18 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
