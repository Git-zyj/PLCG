#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3586;
unsigned char var_2 = (unsigned char)12;
unsigned int var_3 = 4110109030U;
unsigned char var_4 = (unsigned char)29;
int var_5 = 1208354271;
short var_6 = (short)16890;
unsigned char var_10 = (unsigned char)67;
unsigned int var_11 = 528998385U;
unsigned int var_12 = 3195363269U;
signed char var_14 = (signed char)103;
signed char var_15 = (signed char)50;
int zero = 0;
unsigned char var_16 = (unsigned char)95;
short var_17 = (short)2453;
short var_18 = (short)-5943;
signed char var_19 = (signed char)-125;
int var_20 = -263817766;
short var_21 = (short)9743;
unsigned int var_22 = 3697203036U;
short var_23 = (short)22152;
unsigned long long int var_24 = 5398233722597147274ULL;
short var_25 = (short)199;
long long int var_26 = -8541405848274943160LL;
unsigned long long int var_27 = 2801413051836573577ULL;
unsigned char var_28 = (unsigned char)235;
long long int var_29 = -7217782141476753462LL;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)72;
int var_32 = -1767821312;
long long int var_33 = -5415233187416917915LL;
unsigned long long int var_34 = 4148887206621192272ULL;
unsigned short var_35 = (unsigned short)60232;
int var_36 = -1269144612;
unsigned long long int var_37 = 10902591841084078482ULL;
_Bool var_38 = (_Bool)0;
_Bool var_39 = (_Bool)0;
unsigned short arr_0 [20] ;
unsigned long long int arr_2 [20] ;
signed char arr_4 [20] [20] ;
long long int arr_5 [20] ;
unsigned long long int arr_6 [20] [20] [20] ;
signed char arr_8 [20] [20] [20] ;
unsigned char arr_10 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_11 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_15 [20] [20] [20] ;
_Bool arr_16 [20] [20] [20] ;
unsigned long long int arr_17 [20] ;
int arr_18 [20] [20] ;
signed char arr_22 [20] [20] [20] [20] [20] ;
_Bool arr_26 [20] [20] [20] [20] [20] ;
short arr_29 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)18687;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 210457263231894371ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -4298116634693831755LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4230838492459813156ULL : 2387521889630784598ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 18398404929803401540ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 9349420775580498617ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 15972996322314740348ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = 2000253302;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (short)-27490;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
