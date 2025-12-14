#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44087;
unsigned char var_3 = (unsigned char)163;
unsigned char var_5 = (unsigned char)224;
signed char var_6 = (signed char)92;
signed char var_7 = (signed char)-22;
unsigned long long int var_8 = 3685623030476912461ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 267357105679981766LL;
unsigned char var_12 = (unsigned char)218;
unsigned short var_13 = (unsigned short)7294;
unsigned char var_14 = (unsigned char)138;
unsigned short var_15 = (unsigned short)32814;
unsigned int var_16 = 2067826811U;
int zero = 0;
long long int var_18 = 3782715402361856616LL;
unsigned char var_19 = (unsigned char)220;
long long int var_20 = -5087276330624214744LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
