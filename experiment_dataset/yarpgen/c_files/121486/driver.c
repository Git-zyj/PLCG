#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4740568688121059865ULL;
unsigned char var_4 = (unsigned char)63;
unsigned int var_6 = 3106580966U;
unsigned char var_8 = (unsigned char)132;
signed char var_9 = (signed char)83;
_Bool var_10 = (_Bool)0;
long long int var_13 = -1305822068488554918LL;
unsigned short var_14 = (unsigned short)10600;
int var_16 = 951368210;
unsigned char var_17 = (unsigned char)45;
signed char var_18 = (signed char)1;
unsigned int var_19 = 3162854429U;
int zero = 0;
unsigned int var_20 = 3553818976U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3639961481U;
int var_23 = -1963968817;
unsigned short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)46911;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
