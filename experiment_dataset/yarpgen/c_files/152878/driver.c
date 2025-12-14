#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6399;
signed char var_2 = (signed char)87;
unsigned char var_3 = (unsigned char)56;
short var_4 = (short)-11034;
short var_5 = (short)21786;
_Bool var_6 = (_Bool)0;
int var_9 = -44385207;
signed char var_10 = (signed char)-82;
int zero = 0;
short var_11 = (short)2391;
unsigned char var_12 = (unsigned char)183;
unsigned char var_13 = (unsigned char)41;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5713640151883336635LL;
unsigned char var_16 = (unsigned char)116;
int var_17 = -1728506034;
unsigned char var_18 = (unsigned char)137;
short var_19 = (short)1385;
unsigned long long int var_20 = 253996024672526687ULL;
unsigned short var_21 = (unsigned short)25880;
signed char var_22 = (signed char)-110;
unsigned short var_23 = (unsigned short)6986;
int var_24 = 1654899317;
unsigned short var_25 = (unsigned short)47709;
unsigned char var_26 = (unsigned char)244;
unsigned long long int var_27 = 9006294849219909602ULL;
short var_28 = (short)22382;
signed char var_29 = (signed char)50;
unsigned long long int var_30 = 200661422450059709ULL;
long long int var_31 = -2598124139548440218LL;
unsigned long long int var_32 = 16157172961000653144ULL;
unsigned short var_33 = (unsigned short)17929;
short var_34 = (short)7230;
long long int var_35 = -1920763801770795495LL;
long long int var_36 = 7490840365251515754LL;
unsigned short var_37 = (unsigned short)46543;
unsigned char var_38 = (unsigned char)223;
signed char var_39 = (signed char)-90;
short var_40 = (short)-11732;
long long int var_41 = -5083302637334665550LL;
unsigned int var_42 = 1655632626U;
unsigned short var_43 = (unsigned short)58763;
unsigned short var_44 = (unsigned short)41786;
int var_45 = 117237402;
signed char var_46 = (signed char)48;
int var_47 = 1970937828;
_Bool var_48 = (_Bool)0;
unsigned char var_49 = (unsigned char)38;
unsigned short var_50 = (unsigned short)43087;
short var_51 = (short)24130;
int var_52 = 660990956;
unsigned long long int var_53 = 12123636563611218025ULL;
short var_54 = (short)-30314;
signed char arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned char arr_2 [13] [13] ;
unsigned char arr_3 [13] ;
short arr_4 [13] ;
unsigned long long int arr_8 [13] ;
int arr_16 [13] ;
unsigned short arr_19 [13] [13] [13] [13] [13] ;
unsigned char arr_24 [16] ;
signed char arr_25 [16] ;
unsigned int arr_26 [14] [14] ;
int arr_27 [14] ;
unsigned long long int arr_28 [14] ;
unsigned short arr_29 [14] [14] [14] ;
long long int arr_30 [14] ;
short arr_31 [14] [14] ;
short arr_32 [14] [14] [14] ;
_Bool arr_33 [14] ;
long long int arr_34 [14] [14] [14] ;
short arr_35 [14] [14] [14] ;
unsigned short arr_37 [14] [14] ;
_Bool arr_39 [14] [14] [14] [14] ;
long long int arr_40 [14] ;
int arr_41 [14] [14] [14] [14] ;
long long int arr_43 [14] [14] ;
unsigned char arr_46 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)11191;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 15738473175427792920ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 756728609;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)6218;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_26 [i_0] [i_1] = 4067766512U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = -722585074;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = 1138044995042006186ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned short)8751;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = 3593455815149055162LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_31 [i_0] [i_1] = (short)30874;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (short)22268;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = -6994256903623364693LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (short)-1427;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned short)53097;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = 2314023381741480290LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = -603487401;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_43 [i_0] [i_1] = -7237155788232518160LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned char)62;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
