#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
unsigned long long int var_1 = 16626305146777458384ULL;
short var_2 = (short)-18514;
unsigned long long int var_3 = 10265525646321021453ULL;
unsigned int var_5 = 975920685U;
unsigned int var_6 = 3609141620U;
unsigned short var_8 = (unsigned short)18148;
unsigned long long int var_9 = 16247035691545006409ULL;
unsigned int var_11 = 2808745016U;
unsigned char var_12 = (unsigned char)5;
unsigned long long int var_13 = 5425895352876959506ULL;
unsigned short var_14 = (unsigned short)31930;
long long int var_15 = 2180985205286095240LL;
int zero = 0;
unsigned int var_16 = 513239327U;
unsigned int var_17 = 1956190895U;
unsigned int var_18 = 946047794U;
short var_19 = (short)-9273;
short var_20 = (short)-1189;
unsigned int var_21 = 2208814968U;
signed char var_22 = (signed char)-119;
unsigned short var_23 = (unsigned short)40367;
unsigned short var_24 = (unsigned short)17056;
unsigned long long int var_25 = 12670864066354342137ULL;
unsigned long long int var_26 = 9343202725377851297ULL;
short var_27 = (short)20030;
unsigned int var_28 = 3488104235U;
short var_29 = (short)-26007;
unsigned int var_30 = 2666332023U;
unsigned char var_31 = (unsigned char)253;
int var_32 = -60961056;
unsigned char var_33 = (unsigned char)91;
short var_34 = (short)28587;
unsigned int var_35 = 1151638378U;
unsigned short arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
unsigned int arr_3 [15] ;
unsigned long long int arr_5 [15] [15] [15] ;
unsigned char arr_6 [15] ;
signed char arr_7 [15] [15] ;
int arr_8 [15] [15] [15] [15] [15] ;
signed char arr_9 [15] [15] [15] [15] [15] ;
long long int arr_11 [15] ;
unsigned long long int arr_12 [15] ;
short arr_15 [15] [15] [15] ;
unsigned long long int arr_16 [15] [15] [15] ;
int arr_20 [20] [20] ;
unsigned long long int arr_22 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)28666;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 9897740569560886022ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2399292679U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10964279313122223964ULL : 2612320483031870849ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -2022161761 : 1230710572;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)38 : (signed char)47;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 8587593454819745528LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 12290227713992740948ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)19571;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 794907794573162320ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_20 [i_0] [i_1] = -78438575;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = 14884913712732332300ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
