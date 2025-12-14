#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27622;
unsigned int var_2 = 1973199916U;
signed char var_3 = (signed char)65;
signed char var_4 = (signed char)-12;
unsigned char var_5 = (unsigned char)236;
unsigned short var_6 = (unsigned short)37044;
signed char var_7 = (signed char)-74;
long long int var_8 = 3243350074348311378LL;
int zero = 0;
unsigned int var_10 = 3925849219U;
_Bool var_11 = (_Bool)1;
int var_12 = -2103403848;
unsigned long long int var_13 = 14270444926882237715ULL;
unsigned char var_14 = (unsigned char)217;
unsigned char var_15 = (unsigned char)222;
unsigned int var_16 = 1904526756U;
unsigned short var_17 = (unsigned short)51189;
signed char var_18 = (signed char)37;
short var_19 = (short)1725;
unsigned long long int var_20 = 15669438229288329674ULL;
unsigned short var_21 = (unsigned short)27885;
unsigned short var_22 = (unsigned short)37011;
unsigned int var_23 = 2908533863U;
unsigned long long int var_24 = 5469695533754952434ULL;
_Bool var_25 = (_Bool)0;
long long int var_26 = 5816622267155750457LL;
unsigned short var_27 = (unsigned short)49687;
unsigned long long int var_28 = 6247110210483559330ULL;
signed char var_29 = (signed char)14;
long long int var_30 = 681730846658978099LL;
unsigned short var_31 = (unsigned short)3438;
unsigned int var_32 = 355760195U;
_Bool var_33 = (_Bool)1;
short var_34 = (short)-14927;
unsigned long long int var_35 = 4085401321917581421ULL;
long long int var_36 = 799320018296579094LL;
unsigned int var_37 = 1778312918U;
unsigned long long int var_38 = 15976711336356369070ULL;
unsigned long long int var_39 = 15167772793679594435ULL;
signed char var_40 = (signed char)3;
short var_41 = (short)-30346;
long long int var_42 = 3030278651659387037LL;
unsigned long long int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] [15] ;
short arr_2 [15] ;
unsigned long long int arr_9 [20] ;
long long int arr_10 [20] [20] ;
unsigned char arr_11 [24] ;
unsigned int arr_12 [24] ;
long long int arr_13 [24] [24] ;
unsigned char arr_15 [24] [24] [24] ;
unsigned int arr_18 [15] [15] ;
unsigned short arr_21 [22] ;
_Bool arr_22 [14] [14] ;
long long int arr_29 [14] [14] [14] [14] ;
unsigned int arr_31 [14] [14] [14] [14] ;
long long int arr_32 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 15745371164766380760ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 7651271284047166479ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)10890;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 2145256624867792259ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 2102550044151561657LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 1415661806U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = -7303929376976092833LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 2040376651U : 2363239616U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (unsigned short)23922;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = -4744566395011089195LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 729155392U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -5622908019299144171LL : -8143429390189056992LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
