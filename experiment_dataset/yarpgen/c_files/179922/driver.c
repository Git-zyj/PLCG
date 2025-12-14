#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)13815;
unsigned short var_2 = (unsigned short)29719;
unsigned long long int var_3 = 3038904625391923651ULL;
unsigned char var_4 = (unsigned char)219;
int var_5 = -973489758;
int var_6 = -141453389;
unsigned int var_7 = 843029030U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 3486600657624203740ULL;
unsigned short var_10 = (unsigned short)10537;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1487791311U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)33;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)31324;
unsigned short var_17 = (unsigned short)33454;
unsigned short var_18 = (unsigned short)29370;
unsigned char var_19 = (unsigned char)190;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)46961;
unsigned char var_23 = (unsigned char)53;
unsigned int var_24 = 1344652726U;
unsigned short var_25 = (unsigned short)36068;
unsigned int var_26 = 2503910972U;
unsigned short var_27 = (unsigned short)43741;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)199;
unsigned short var_30 = (unsigned short)53577;
unsigned char var_31 = (unsigned char)202;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 1853454086240445049ULL;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)54257;
unsigned short var_37 = (unsigned short)5081;
unsigned short var_38 = (unsigned short)49795;
unsigned long long int var_39 = 12055293150417428997ULL;
unsigned char var_40 = (unsigned char)94;
_Bool var_41 = (_Bool)1;
unsigned int var_42 = 1864139124U;
unsigned short var_43 = (unsigned short)48265;
unsigned char var_44 = (unsigned char)215;
unsigned short var_45 = (unsigned short)65465;
unsigned char var_46 = (unsigned char)17;
_Bool arr_9 [10] [10] [10] [10] [10] [10] ;
_Bool arr_14 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
