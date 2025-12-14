#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8083618519440281896LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 877347000U;
unsigned char var_4 = (unsigned char)218;
signed char var_5 = (signed char)-49;
short var_6 = (short)30327;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_9 = -5421662223477769859LL;
unsigned short var_10 = (unsigned short)22020;
signed char var_12 = (signed char)-100;
unsigned short var_13 = (unsigned short)10445;
unsigned short var_14 = (unsigned short)7427;
long long int var_16 = 331317383422024632LL;
int zero = 0;
unsigned char var_19 = (unsigned char)238;
signed char var_20 = (signed char)-45;
unsigned short var_21 = (unsigned short)63949;
void init() {
}

void checksum() {
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
