#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned short var_1 = (unsigned short)63579;
int var_2 = 2014429114;
signed char var_3 = (signed char)94;
int var_4 = 2016177852;
unsigned char var_5 = (unsigned char)113;
signed char var_6 = (signed char)-54;
unsigned long long int var_7 = 7340716371669397449ULL;
signed char var_9 = (signed char)101;
unsigned short var_10 = (unsigned short)46552;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1891575055022422068LL;
unsigned char var_13 = (unsigned char)222;
unsigned char var_14 = (unsigned char)216;
unsigned short var_15 = (unsigned short)63009;
signed char var_16 = (signed char)94;
int zero = 0;
unsigned short var_17 = (unsigned short)51760;
short var_18 = (short)21459;
unsigned long long int var_19 = 3674281640864402012ULL;
unsigned int var_20 = 2737575499U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)725;
short var_23 = (short)7635;
int var_24 = -1008094703;
unsigned char var_25 = (unsigned char)32;
short var_26 = (short)-4804;
unsigned long long int var_27 = 9614265039507432665ULL;
unsigned short var_28 = (unsigned short)43794;
short var_29 = (short)19567;
signed char var_30 = (signed char)-23;
unsigned long long int var_31 = 16350504285969689488ULL;
int var_32 = 484011255;
unsigned char var_33 = (unsigned char)241;
int var_34 = 1103889241;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)-9;
signed char arr_2 [14] ;
short arr_3 [14] [14] [14] ;
int arr_5 [14] [14] ;
short arr_9 [14] [14] ;
unsigned short arr_10 [14] [14] [14] [14] ;
int arr_12 [14] [14] [14] ;
_Bool arr_16 [14] [14] ;
unsigned long long int arr_18 [14] [14] ;
short arr_20 [14] [14] [14] [14] ;
signed char arr_25 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-315;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1689956314 : 596890030;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (short)21517;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)26207 : (unsigned short)16386;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1788218875 : 282684581;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 18365823263426352250ULL : 4744126460454213779ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)11572 : (short)-32573;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)82;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
