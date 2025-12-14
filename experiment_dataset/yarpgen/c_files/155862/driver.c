#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3600909856U;
unsigned int var_2 = 3849227616U;
unsigned short var_3 = (unsigned short)6462;
signed char var_4 = (signed char)33;
short var_8 = (short)-14590;
short var_9 = (short)1526;
short var_12 = (short)8211;
unsigned int var_14 = 1262391763U;
short var_15 = (short)-18181;
int var_16 = 758672523;
unsigned char var_17 = (unsigned char)188;
int zero = 0;
short var_18 = (short)28704;
signed char var_19 = (signed char)126;
unsigned char var_20 = (unsigned char)246;
unsigned char var_21 = (unsigned char)118;
long long int var_22 = 930958265803512240LL;
long long int var_23 = -2971619120557559689LL;
short var_24 = (short)-7572;
short var_25 = (short)8121;
signed char var_26 = (signed char)86;
short var_27 = (short)-2730;
long long int var_28 = 9146249099621697544LL;
unsigned int var_29 = 1166900346U;
signed char var_30 = (signed char)-20;
int var_31 = 635791183;
short var_32 = (short)11355;
long long int var_33 = -6562749387812816467LL;
unsigned char var_34 = (unsigned char)55;
long long int var_35 = -4295411319550985191LL;
short var_36 = (short)-13839;
unsigned char var_37 = (unsigned char)200;
unsigned short arr_0 [24] ;
unsigned short arr_18 [12] [12] [12] [12] [12] ;
short arr_21 [16] ;
unsigned char arr_14 [12] [12] [12] [12] ;
unsigned int arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)56317;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)19555;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (short)26032;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 3315628044U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
