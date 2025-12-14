#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1333969440U;
unsigned int var_1 = 2632664427U;
signed char var_2 = (signed char)105;
short var_3 = (short)4288;
signed char var_5 = (signed char)-84;
unsigned short var_6 = (unsigned short)7890;
unsigned int var_7 = 3993699144U;
long long int var_8 = -8610845512406297870LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-25229;
short var_11 = (short)30835;
long long int var_12 = -597849329227081832LL;
signed char var_13 = (signed char)66;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)68;
long long int var_18 = 5954535063783663304LL;
unsigned int var_19 = 2488335142U;
long long int var_20 = -6285328710003981686LL;
short var_21 = (short)-17308;
signed char var_22 = (signed char)77;
unsigned char var_23 = (unsigned char)133;
unsigned long long int var_24 = 11627168458079514600ULL;
signed char var_25 = (signed char)-86;
short var_26 = (short)10871;
unsigned int var_27 = 2153925438U;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-120;
unsigned long long int var_30 = 15756368715212975663ULL;
unsigned char var_31 = (unsigned char)79;
signed char var_32 = (signed char)104;
long long int var_33 = -64195190070900190LL;
unsigned char var_34 = (unsigned char)151;
signed char var_35 = (signed char)-1;
unsigned int var_36 = 4017263118U;
unsigned int var_37 = 3086742719U;
unsigned int var_38 = 145443841U;
_Bool var_39 = (_Bool)1;
unsigned int var_40 = 124390771U;
short var_41 = (short)-26339;
signed char var_42 = (signed char)68;
short var_43 = (short)-28416;
unsigned long long int var_44 = 14492118689403914762ULL;
long long int var_45 = 3314863847325122707LL;
unsigned int var_46 = 2150037910U;
long long int var_47 = -5616941336448890595LL;
unsigned int var_48 = 3812895576U;
unsigned long long int var_49 = 7959787364203447294ULL;
unsigned long long int arr_0 [19] [19] ;
short arr_1 [19] [19] ;
unsigned int arr_2 [22] ;
unsigned long long int arr_4 [22] ;
unsigned long long int arr_6 [22] [22] [22] ;
short arr_7 [22] [22] ;
unsigned int arr_8 [22] [22] [22] ;
unsigned int arr_10 [22] [22] [22] [22] ;
_Bool arr_17 [23] [23] ;
unsigned long long int arr_18 [23] ;
signed char arr_28 [16] [16] [16] [16] ;
short arr_31 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_13 [22] ;
_Bool arr_30 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 15973138122996300835ULL : 17906301063063467376ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)23037 : (short)-12758;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3804644584U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 7342961584754787641ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 11796948669750262392ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)32216;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2603501934U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 3176142218U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 11713521519425918173ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)22323;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 2745117812U : 1479809767U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    hash(&seed, var_49);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
