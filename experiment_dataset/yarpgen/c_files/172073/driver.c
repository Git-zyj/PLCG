#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned short var_2 = (unsigned short)9499;
unsigned int var_4 = 949789933U;
short var_5 = (short)20856;
unsigned int var_6 = 964192460U;
int var_7 = 1658416184;
unsigned char var_8 = (unsigned char)126;
unsigned int var_9 = 2985361961U;
signed char var_11 = (signed char)-4;
int zero = 0;
long long int var_12 = -7701943869070628461LL;
signed char var_13 = (signed char)-65;
signed char var_14 = (signed char)4;
unsigned char var_15 = (unsigned char)2;
unsigned short var_16 = (unsigned short)57749;
_Bool var_17 = (_Bool)1;
long long int arr_1 [18] ;
_Bool arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2972357714629372581LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
