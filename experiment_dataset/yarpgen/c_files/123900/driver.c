#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26194;
short var_1 = (short)29861;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 9419752701430528359ULL;
signed char var_4 = (signed char)-8;
unsigned char var_5 = (unsigned char)210;
int var_6 = 429086368;
int var_7 = -1977077889;
short var_8 = (short)-25515;
short var_9 = (short)-26408;
unsigned long long int var_11 = 16278078400093827894ULL;
short var_12 = (short)-21316;
signed char var_13 = (signed char)-123;
unsigned long long int var_14 = 9366469506291163870ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-111;
unsigned short var_17 = (unsigned short)53632;
unsigned char var_18 = (unsigned char)102;
unsigned short var_19 = (unsigned short)18237;
unsigned char var_20 = (unsigned char)34;
unsigned short var_21 = (unsigned short)49953;
unsigned short var_22 = (unsigned short)55333;
unsigned char var_23 = (unsigned char)101;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)55082;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-26;
int var_28 = -1900721740;
short var_29 = (short)-23140;
short var_30 = (short)-25769;
int var_31 = 565606788;
int var_32 = -1425860748;
int var_33 = -652638207;
unsigned char arr_3 [20] [20] ;
short arr_10 [20] ;
_Bool arr_13 [11] ;
short arr_28 [16] [16] [16] [16] [16] [16] [16] ;
unsigned short arr_29 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)32635;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (short)13673 : (short)24577;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55901 : (unsigned short)54766;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
