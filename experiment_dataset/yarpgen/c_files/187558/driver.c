#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 48174330U;
unsigned short var_6 = (unsigned short)34776;
unsigned int var_7 = 2493851344U;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-82;
int var_11 = 1232070300;
int var_15 = 654508581;
int zero = 0;
unsigned long long int var_16 = 229819086386013849ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)62;
unsigned char var_19 = (unsigned char)202;
unsigned int var_20 = 3659446810U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
