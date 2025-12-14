#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32076;
unsigned char var_1 = (unsigned char)248;
short var_2 = (short)31426;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)2;
unsigned long long int var_5 = 5799190700008916530ULL;
unsigned long long int var_6 = 6405783617397306364ULL;
signed char var_7 = (signed char)-93;
short var_8 = (short)-29692;
unsigned char var_9 = (unsigned char)139;
short var_10 = (short)11682;
long long int var_11 = 7634311016176295472LL;
unsigned char var_12 = (unsigned char)212;
short var_13 = (short)-16039;
long long int var_14 = 1550247657225324704LL;
short var_15 = (short)-22827;
long long int var_16 = -8021880462789739718LL;
int zero = 0;
short var_17 = (short)-3691;
unsigned char var_18 = (unsigned char)169;
unsigned char var_19 = (unsigned char)203;
unsigned char var_20 = (unsigned char)90;
unsigned char var_21 = (unsigned char)237;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-3609;
int var_24 = -1223736421;
int var_25 = -994100448;
unsigned char var_26 = (unsigned char)219;
unsigned int var_27 = 2692935574U;
short var_28 = (short)-17677;
unsigned int var_29 = 2267234707U;
short var_30 = (short)31608;
_Bool var_31 = (_Bool)0;
short var_32 = (short)23546;
long long int var_33 = -6113790527453667519LL;
unsigned int var_34 = 3411535592U;
int var_35 = -874022833;
unsigned long long int var_36 = 8973201831786538919ULL;
unsigned char var_37 = (unsigned char)73;
unsigned int var_38 = 1524887279U;
unsigned char var_39 = (unsigned char)90;
unsigned char var_40 = (unsigned char)102;
long long int var_41 = -6922713548962558841LL;
short var_42 = (short)19045;
signed char var_43 = (signed char)-83;
long long int var_44 = -220636452970853942LL;
unsigned int var_45 = 1403725272U;
unsigned char arr_0 [17] ;
unsigned int arr_1 [17] ;
unsigned int arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
int arr_5 [17] [17] [17] ;
short arr_6 [17] ;
unsigned long long int arr_8 [17] ;
long long int arr_11 [17] [17] [17] [17] ;
short arr_12 [17] [17] [17] [17] ;
unsigned long long int arr_13 [17] [17] ;
short arr_14 [17] [17] [17] [17] ;
short arr_15 [17] [17] ;
signed char arr_17 [17] [17] [17] ;
unsigned int arr_23 [18] [18] ;
int arr_24 [18] ;
signed char arr_25 [18] [18] [18] ;
short arr_26 [18] [18] [18] ;
long long int arr_28 [18] ;
short arr_29 [20] ;
long long int arr_30 [20] ;
long long int arr_7 [17] ;
unsigned char arr_10 [17] ;
short arr_16 [17] [17] [17] [17] ;
signed char arr_19 [17] ;
long long int arr_22 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 417637312U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1086054369U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -158687238;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)31119;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 15538568354832667566ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -8134560493103494643LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)30815 : (short)6065;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 3206481611635654235ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)29653;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-29898;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = 1205730787U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = -916248574;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)-8186;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = -9009782554034060877LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = (short)-11542;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = -5085995785328796160LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -2431414395738181941LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)-29314;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = 1358106192596632663LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
