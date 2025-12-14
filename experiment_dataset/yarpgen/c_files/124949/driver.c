#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1474558723U;
unsigned short var_1 = (unsigned short)22807;
signed char var_2 = (signed char)29;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-40;
long long int var_6 = -7316884575407460958LL;
short var_8 = (short)-2664;
long long int var_9 = 4164915143196042779LL;
int var_10 = -1004090894;
unsigned int var_13 = 2719135810U;
unsigned short var_14 = (unsigned short)49937;
long long int var_15 = 2308471639893002991LL;
int zero = 0;
int var_16 = 1990968916;
short var_17 = (short)4376;
unsigned short var_18 = (unsigned short)56679;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)90;
short arr_0 [19] ;
unsigned long long int arr_4 [19] [19] ;
long long int arr_5 [19] ;
unsigned short arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)32179;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 6533091893356454329ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 6516220456423308310LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)31986;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
