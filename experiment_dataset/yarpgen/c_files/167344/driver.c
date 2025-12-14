#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2062745783;
unsigned short var_1 = (unsigned short)49840;
int var_4 = 435444669;
unsigned short var_5 = (unsigned short)32432;
unsigned long long int var_8 = 1203996707852002259ULL;
unsigned short var_10 = (unsigned short)48835;
unsigned short var_12 = (unsigned short)35064;
signed char var_14 = (signed char)30;
int var_15 = -681025648;
long long int var_16 = 3507046145216996051LL;
unsigned long long int var_17 = 15594761227282113528ULL;
signed char var_18 = (signed char)97;
long long int var_19 = 5189615879413663130LL;
int zero = 0;
signed char var_20 = (signed char)48;
unsigned short var_21 = (unsigned short)56522;
unsigned short var_22 = (unsigned short)33698;
unsigned short var_23 = (unsigned short)57365;
unsigned short var_24 = (unsigned short)57225;
unsigned long long int var_25 = 10376817930602393696ULL;
signed char var_26 = (signed char)-32;
long long int var_27 = 6028543940840935100LL;
long long int var_28 = -2281454184520831674LL;
unsigned short var_29 = (unsigned short)23403;
int var_30 = 296259985;
unsigned char var_31 = (unsigned char)54;
unsigned short var_32 = (unsigned short)64532;
short var_33 = (short)-9465;
unsigned long long int var_34 = 8481085972510291175ULL;
long long int var_35 = 83562550023467868LL;
unsigned int var_36 = 431075595U;
short var_37 = (short)12955;
signed char var_38 = (signed char)-89;
long long int var_39 = -2031482537219556616LL;
_Bool arr_4 [22] [22] ;
long long int arr_5 [22] [22] ;
long long int arr_7 [22] ;
int arr_8 [22] ;
long long int arr_9 [22] [22] ;
short arr_23 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_24 [22] [22] [22] [22] [22] [22] [22] ;
unsigned char arr_25 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_31 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = -9136371840271060536LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 8189229172411856074LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -1301754085;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = -172628037164126401LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (short)-12366 : (short)23681;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)36082;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned char)110 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31986 : (unsigned short)57578;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
