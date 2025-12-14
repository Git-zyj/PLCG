#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -10117511;
long long int var_2 = -3599325117964917585LL;
signed char var_3 = (signed char)103;
unsigned short var_5 = (unsigned short)11791;
unsigned int var_6 = 3197737153U;
long long int var_7 = -6420945306637222822LL;
unsigned int var_8 = 3218492890U;
unsigned int var_9 = 1447748535U;
long long int var_10 = -8675454407698083713LL;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-42;
short var_14 = (short)10368;
unsigned long long int var_15 = 8240799841461031003ULL;
unsigned short var_16 = (unsigned short)24671;
int var_17 = 825594557;
int zero = 0;
unsigned int var_18 = 2143372285U;
signed char var_19 = (signed char)45;
unsigned long long int var_20 = 13467076693032159355ULL;
signed char var_21 = (signed char)4;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)58765;
long long int var_24 = -4116529937945968891LL;
unsigned int var_25 = 2941656041U;
unsigned short var_26 = (unsigned short)34068;
short var_27 = (short)-16655;
unsigned short var_28 = (unsigned short)32055;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)31;
unsigned short var_31 = (unsigned short)7920;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)1;
_Bool var_34 = (_Bool)0;
int var_35 = -353232186;
short var_36 = (short)2319;
signed char var_37 = (signed char)-117;
unsigned int var_38 = 3760141081U;
_Bool var_39 = (_Bool)1;
unsigned int var_40 = 705393891U;
long long int var_41 = 3495606127018140799LL;
signed char var_42 = (signed char)-125;
int var_43 = -813019703;
_Bool var_44 = (_Bool)1;
unsigned int var_45 = 4202172591U;
_Bool var_46 = (_Bool)1;
unsigned short var_47 = (unsigned short)30945;
unsigned char var_48 = (unsigned char)119;
_Bool arr_1 [22] [22] ;
_Bool arr_2 [22] [22] [22] ;
unsigned short arr_3 [22] [22] [22] ;
long long int arr_5 [22] ;
_Bool arr_6 [22] [22] [22] [22] [22] ;
unsigned int arr_7 [22] ;
int arr_8 [22] [22] [22] [22] [22] [22] ;
int arr_9 [22] [22] [22] [22] ;
long long int arr_10 [22] [22] [22] [22] [22] ;
_Bool arr_11 [22] [22] ;
signed char arr_15 [22] [22] [22] ;
unsigned short arr_16 [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_21 [22] [22] [22] [22] ;
int arr_23 [22] [22] [22] [22] ;
_Bool arr_27 [22] [22] [22] [22] ;
unsigned short arr_30 [22] ;
int arr_42 [22] ;
int arr_47 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)20202;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -2539769337262620486LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 2796853087U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -408652823;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -68972054;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 8138732009985117814LL : 2060452173094305664LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-105 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)42341;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 3794056176563971529ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -1369207628;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = (unsigned short)42114;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_42 [i_0] = -1605715525;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -63384998 : -1556321734;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
