#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
unsigned short var_1 = (unsigned short)5938;
int var_2 = -255926507;
short var_3 = (short)-24349;
short var_4 = (short)17526;
unsigned short var_5 = (unsigned short)61495;
unsigned short var_6 = (unsigned short)38936;
unsigned long long int var_7 = 16476824059683631616ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)41180;
int zero = 0;
unsigned char var_11 = (unsigned char)89;
unsigned long long int var_12 = 4189039943444220604ULL;
unsigned long long int var_13 = 14651781432794843486ULL;
_Bool var_14 = (_Bool)1;
int var_15 = 1388644169;
int var_16 = 1919401325;
short var_17 = (short)29227;
unsigned int var_18 = 371384732U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)46959;
long long int var_21 = 8252186212787376110LL;
unsigned long long int var_22 = 14102213930138015564ULL;
unsigned char var_23 = (unsigned char)6;
unsigned short var_24 = (unsigned short)63081;
unsigned short var_25 = (unsigned short)47913;
signed char var_26 = (signed char)53;
long long int var_27 = -6110306040347719729LL;
unsigned long long int var_28 = 10195684182092906163ULL;
unsigned long long int var_29 = 14641694818349823619ULL;
unsigned int var_30 = 1170550179U;
unsigned short var_31 = (unsigned short)7627;
unsigned char var_32 = (unsigned char)230;
signed char var_33 = (signed char)123;
unsigned char var_34 = (unsigned char)54;
long long int var_35 = -3402484037802660975LL;
long long int var_36 = 8462311134431061407LL;
unsigned short var_37 = (unsigned short)62035;
unsigned int var_38 = 3341706302U;
long long int var_39 = 6149468180830077650LL;
signed char var_40 = (signed char)109;
int var_41 = -1729299455;
unsigned short var_42 = (unsigned short)61754;
_Bool var_43 = (_Bool)1;
int var_44 = 912176467;
unsigned long long int var_45 = 12937416763300574721ULL;
unsigned char var_46 = (unsigned char)59;
unsigned long long int var_47 = 17314105219961521943ULL;
long long int var_48 = -1069876172289839173LL;
unsigned short arr_0 [11] ;
int arr_1 [11] [11] ;
unsigned long long int arr_2 [11] ;
_Bool arr_3 [11] ;
unsigned char arr_4 [11] [11] [11] ;
unsigned short arr_5 [11] [11] [11] ;
unsigned long long int arr_6 [11] ;
unsigned int arr_7 [11] ;
_Bool arr_10 [11] [11] ;
unsigned long long int arr_12 [11] ;
unsigned int arr_15 [11] [11] [11] [11] ;
int arr_17 [11] [11] [11] [11] ;
int arr_20 [11] [11] ;
unsigned int arr_22 [11] [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_23 [11] ;
int arr_26 [11] [11] [11] [11] ;
int arr_28 [11] [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_29 [11] [11] [11] [11] ;
int arr_37 [11] [11] ;
short arr_38 [11] ;
_Bool arr_39 [11] [11] [11] [11] ;
_Bool arr_40 [11] [11] [11] [11] ;
unsigned short arr_51 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)60419;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -288866757;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 4268676781964582269ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)10641;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 4354255548733953445ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 3806179378U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 14638754373504643449ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 3831204547U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1546740674;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = 555666883;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 350855386U : 3226368982U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = 1198872573655998882ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 1597176374;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 506031016;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 8899348989920909506ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_37 [i_0] [i_1] = -871619194;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_38 [i_0] = (short)-19827;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_51 [i_0] [i_1] = (unsigned short)39746;
}

void checksum() {
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
