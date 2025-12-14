#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6127;
signed char var_1 = (signed char)105;
short var_2 = (short)12821;
_Bool var_3 = (_Bool)1;
short var_5 = (short)19150;
int var_6 = -270231299;
int var_7 = 221169787;
unsigned char var_8 = (unsigned char)171;
long long int var_9 = -3192334606639619037LL;
signed char var_10 = (signed char)-112;
signed char var_11 = (signed char)120;
signed char var_13 = (signed char)-74;
unsigned char var_15 = (unsigned char)137;
unsigned int var_16 = 2505232901U;
signed char var_18 = (signed char)67;
unsigned short var_19 = (unsigned short)27743;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
int var_21 = 1932719936;
signed char var_22 = (signed char)107;
_Bool var_23 = (_Bool)0;
int var_24 = 1581197829;
int var_25 = -889390038;
int var_26 = 1486925000;
signed char var_27 = (signed char)59;
signed char var_28 = (signed char)68;
short var_29 = (short)-20124;
signed char var_30 = (signed char)45;
unsigned int var_31 = 873958457U;
signed char var_32 = (signed char)-92;
long long int var_33 = 9000110342193147713LL;
unsigned char var_34 = (unsigned char)40;
signed char var_35 = (signed char)92;
unsigned long long int arr_1 [11] [11] ;
int arr_2 [11] ;
unsigned short arr_4 [11] [11] ;
unsigned short arr_17 [18] [18] ;
int arr_18 [18] [18] ;
unsigned int arr_19 [18] ;
short arr_24 [18] [18] [18] [18] [18] ;
unsigned char arr_11 [11] [11] [11] [11] ;
unsigned int arr_25 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 12923373562332787338ULL : 5186324830215476262ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -858625902 : 1074410710;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)11516 : (unsigned short)27798;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)10105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? -1465429296 : 457604793;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 2669426038U : 520774849U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)17722 : (short)-19809;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)233 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 55951062U : 1347535896U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
