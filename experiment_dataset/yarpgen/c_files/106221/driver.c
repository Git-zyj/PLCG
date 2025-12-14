#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7382847532091594651LL;
long long int var_3 = 7228058140601952915LL;
_Bool var_4 = (_Bool)1;
int var_5 = 1118684045;
unsigned long long int var_15 = 15957857379663540272ULL;
unsigned char var_16 = (unsigned char)188;
int zero = 0;
long long int var_18 = -9053339612678206326LL;
long long int var_19 = 2999486273409055340LL;
signed char var_20 = (signed char)-57;
long long int var_21 = -1850910654916646721LL;
short var_22 = (short)30840;
unsigned short var_23 = (unsigned short)7724;
unsigned short var_24 = (unsigned short)52094;
unsigned short arr_2 [22] [22] ;
_Bool arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)7895 : (unsigned short)61017;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
