#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1308132238;
int var_1 = 154263455;
signed char var_2 = (signed char)-26;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-5662;
unsigned short var_5 = (unsigned short)5501;
unsigned char var_6 = (unsigned char)196;
signed char var_7 = (signed char)11;
int var_9 = -1383409786;
unsigned char var_11 = (unsigned char)107;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 254073873U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
