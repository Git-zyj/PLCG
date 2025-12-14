#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)216;
unsigned char var_7 = (unsigned char)216;
long long int var_8 = -8498719454358680993LL;
_Bool var_9 = (_Bool)0;
long long int var_11 = 9188367028188820034LL;
unsigned char var_12 = (unsigned char)72;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)9;
int zero = 0;
short var_18 = (short)-2654;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3091265245649605705LL;
unsigned char var_21 = (unsigned char)35;
int var_22 = 149920484;
unsigned char var_23 = (unsigned char)161;
unsigned short arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)24654;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
