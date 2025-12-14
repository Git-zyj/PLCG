#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7668182570511642335ULL;
short var_1 = (short)9515;
signed char var_2 = (signed char)-19;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 6026654429813669733ULL;
short var_5 = (short)31541;
short var_6 = (short)23307;
short var_8 = (short)24457;
unsigned int var_10 = 1837673641U;
unsigned long long int var_11 = 13700039835670842154ULL;
unsigned short var_12 = (unsigned short)47577;
unsigned int var_13 = 2693472678U;
long long int var_14 = 7001478969732927897LL;
int zero = 0;
unsigned char var_15 = (unsigned char)245;
signed char var_16 = (signed char)-13;
signed char var_17 = (signed char)-14;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-680;
unsigned short arr_0 [18] ;
signed char arr_1 [18] [18] ;
unsigned int arr_2 [18] ;
signed char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49209 : (unsigned short)59661;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3910868044U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)-25;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
