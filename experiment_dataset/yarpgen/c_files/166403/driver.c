#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11020;
short var_1 = (short)18618;
short var_2 = (short)-26876;
unsigned int var_3 = 3652703157U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 2554283157604311655ULL;
short var_7 = (short)3115;
unsigned char var_8 = (unsigned char)50;
unsigned char var_9 = (unsigned char)52;
int zero = 0;
short var_10 = (short)13062;
short var_11 = (short)-14631;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 6604557221418956423ULL;
unsigned int var_14 = 3573787036U;
unsigned long long int var_15 = 7014358674514047555ULL;
unsigned long long int var_16 = 16471303984383654509ULL;
short var_17 = (short)10249;
unsigned int var_18 = 974776404U;
unsigned int var_19 = 2745042879U;
unsigned short var_20 = (unsigned short)36774;
unsigned long long int var_21 = 5983154017705092400ULL;
unsigned short var_22 = (unsigned short)52255;
short var_23 = (short)-21318;
unsigned long long int var_24 = 17383903516110485362ULL;
unsigned short var_25 = (unsigned short)50605;
int var_26 = 2119776858;
short var_27 = (short)2570;
short var_28 = (short)14790;
unsigned long long int var_29 = 12130424352625558904ULL;
unsigned long long int var_30 = 9252777951009922618ULL;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 11022310077632311369ULL;
unsigned int var_33 = 3567019067U;
_Bool var_34 = (_Bool)1;
int var_35 = -468832331;
unsigned long long int var_36 = 9401247001918693621ULL;
unsigned long long int var_37 = 5009888868189525485ULL;
_Bool var_38 = (_Bool)0;
unsigned char var_39 = (unsigned char)11;
unsigned int var_40 = 3484763677U;
unsigned long long int arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
_Bool arr_2 [17] [17] ;
int arr_3 [17] [17] ;
unsigned long long int arr_4 [17] [17] [17] ;
short arr_5 [17] [17] ;
short arr_6 [17] [17] ;
_Bool arr_7 [17] ;
_Bool arr_9 [17] [17] [17] ;
unsigned long long int arr_12 [17] [17] [17] [17] ;
short arr_14 [17] [17] [17] [17] ;
unsigned int arr_15 [17] ;
unsigned short arr_17 [17] [17] [17] ;
unsigned short arr_18 [17] [17] [17] [17] ;
unsigned int arr_20 [17] [17] [17] ;
unsigned long long int arr_21 [17] [17] [17] [17] ;
unsigned int arr_22 [17] [17] [17] [17] ;
short arr_26 [17] ;
short arr_27 [17] [17] [17] [17] [17] ;
short arr_31 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 13494764456432572001ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2107532166U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 830811490;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 756337338611559842ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)16913;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-15575;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 8209736029413656582ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)-17283;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 3889392178U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)4708;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52914;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 948436771U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 14650208988142029820ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 817237517U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = (short)-17964;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-5890;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)16000;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
