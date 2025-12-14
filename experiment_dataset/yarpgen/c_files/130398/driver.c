#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27799;
signed char var_1 = (signed char)18;
unsigned short var_2 = (unsigned short)61123;
unsigned char var_3 = (unsigned char)1;
short var_4 = (short)22468;
long long int var_6 = 9030640802374472134LL;
unsigned long long int var_7 = 4039065612217700848ULL;
long long int var_8 = 3594525028891007976LL;
unsigned long long int var_9 = 8042614243736718591ULL;
unsigned short var_10 = (unsigned short)1838;
signed char var_11 = (signed char)-17;
unsigned short var_12 = (unsigned short)45581;
long long int var_13 = 3268772089199629004LL;
unsigned short var_14 = (unsigned short)62184;
signed char var_15 = (signed char)34;
unsigned short var_17 = (unsigned short)33597;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
unsigned char var_19 = (unsigned char)181;
unsigned char var_20 = (unsigned char)106;
unsigned int var_21 = 2822609060U;
short var_22 = (short)29789;
unsigned long long int var_23 = 12978385342669861907ULL;
signed char var_24 = (signed char)-78;
unsigned long long int var_25 = 7630596012980694122ULL;
unsigned char var_26 = (unsigned char)251;
signed char var_27 = (signed char)-122;
long long int var_28 = -7709548817718054295LL;
short var_29 = (short)4512;
unsigned long long int var_30 = 11745943505738897589ULL;
unsigned short var_31 = (unsigned short)28003;
short arr_1 [13] ;
unsigned short arr_4 [22] ;
long long int arr_5 [22] [22] ;
signed char arr_7 [22] ;
unsigned int arr_8 [22] ;
long long int arr_14 [22] [22] [22] [22] ;
unsigned char arr_2 [13] ;
long long int arr_15 [22] [22] ;
long long int arr_20 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)902;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)63597;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 9096728836778027914LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 1009613565U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 6398782021874537812LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = 4663822012762090869LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -4325748858156338470LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
