#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
unsigned short var_2 = (unsigned short)16485;
unsigned long long int var_3 = 12410441564304069518ULL;
unsigned char var_4 = (unsigned char)22;
short var_5 = (short)14089;
_Bool var_7 = (_Bool)1;
long long int var_8 = -4938342555637147291LL;
unsigned short var_10 = (unsigned short)61973;
signed char var_12 = (signed char)67;
unsigned short var_13 = (unsigned short)34685;
unsigned long long int var_14 = 465882170126445779ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 14669612015972273702ULL;
unsigned long long int var_18 = 17620463696943338510ULL;
long long int var_19 = -2466701556730292997LL;
short var_20 = (short)-16764;
unsigned short var_21 = (unsigned short)46974;
int var_22 = -678436650;
unsigned short var_23 = (unsigned short)48877;
signed char var_24 = (signed char)-99;
unsigned long long int var_25 = 3063438831939448759ULL;
long long int var_26 = -5288888638754145373LL;
unsigned short var_27 = (unsigned short)23356;
unsigned char var_28 = (unsigned char)217;
long long int var_29 = -8333891886303171967LL;
_Bool var_30 = (_Bool)0;
short var_31 = (short)-8648;
unsigned long long int var_32 = 11340456996386450824ULL;
signed char var_33 = (signed char)62;
_Bool var_34 = (_Bool)0;
short arr_0 [15] [15] ;
unsigned char arr_1 [15] [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
_Bool arr_5 [12] ;
unsigned long long int arr_7 [12] [12] [12] ;
unsigned char arr_8 [12] [12] [12] ;
short arr_12 [12] [12] [12] [12] ;
signed char arr_15 [12] [12] [12] [12] ;
_Bool arr_17 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_18 [12] [12] [12] [12] [12] ;
unsigned char arr_23 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-13816;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2916068805358455499ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11524189107005772123ULL : 14754312346599725987ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)13 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)10876 : (short)14754;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-19 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 9138482577891869166ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (unsigned char)52;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
