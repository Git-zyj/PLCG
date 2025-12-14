#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5494702707380921745LL;
_Bool var_2 = (_Bool)0;
int var_3 = 1376450999;
long long int var_4 = 5737280738858732170LL;
int var_6 = -1975658759;
unsigned char var_7 = (unsigned char)148;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)244;
unsigned short var_13 = (unsigned short)46757;
unsigned char var_14 = (unsigned char)83;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)116;
int zero = 0;
int var_18 = -579348236;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)202;
unsigned char var_21 = (unsigned char)107;
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
