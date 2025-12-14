#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)202;
signed char var_7 = (signed char)-88;
long long int var_8 = 5639794214639976820LL;
int zero = 0;
unsigned long long int var_20 = 10554405326949609336ULL;
unsigned long long int var_21 = 6276752315097575676ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-9906;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)91;
short var_27 = (short)-1961;
unsigned int var_28 = 4190786345U;
unsigned long long int var_29 = 8619184967985832463ULL;
signed char var_30 = (signed char)95;
unsigned short var_31 = (unsigned short)12496;
long long int var_32 = -178349723865477371LL;
unsigned int var_33 = 2450744470U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
