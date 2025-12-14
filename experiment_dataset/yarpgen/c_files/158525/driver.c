#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63408;
unsigned char var_5 = (unsigned char)22;
signed char var_6 = (signed char)-25;
unsigned short var_7 = (unsigned short)55959;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)32606;
int zero = 0;
unsigned short var_11 = (unsigned short)32468;
int var_12 = -392985271;
short var_13 = (short)23143;
unsigned int var_14 = 3857335388U;
_Bool var_15 = (_Bool)0;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
