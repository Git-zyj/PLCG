#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 239786173;
unsigned short var_4 = (unsigned short)23744;
int var_5 = 507422996;
short var_6 = (short)-23007;
short var_12 = (short)7971;
unsigned long long int var_14 = 8809764655745786620ULL;
int var_15 = 1380983729;
int var_16 = -1111361074;
unsigned long long int var_17 = 11728683105416042236ULL;
unsigned char var_18 = (unsigned char)42;
int zero = 0;
signed char var_19 = (signed char)108;
short var_20 = (short)-26589;
int var_21 = 230662174;
short var_22 = (short)-5054;
short var_23 = (short)32026;
short var_24 = (short)27607;
int var_25 = -1478257808;
signed char var_26 = (signed char)46;
short var_27 = (short)3363;
unsigned char var_28 = (unsigned char)148;
signed char var_29 = (signed char)-85;
signed char var_30 = (signed char)68;
unsigned short var_31 = (unsigned short)25293;
int var_32 = -939777956;
signed char var_33 = (signed char)-125;
int var_34 = -1957357748;
signed char var_35 = (signed char)119;
unsigned short var_36 = (unsigned short)4655;
signed char arr_0 [19] ;
signed char arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
int arr_4 [21] [21] ;
int arr_5 [21] [21] ;
unsigned short arr_6 [12] ;
int arr_9 [12] ;
unsigned short arr_11 [12] [12] ;
signed char arr_22 [25] [25] ;
signed char arr_23 [25] [25] ;
unsigned char arr_3 [19] ;
unsigned short arr_10 [12] ;
unsigned short arr_13 [12] [12] [12] ;
short arr_14 [12] [12] ;
unsigned short arr_24 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 1886330935;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 871187142;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)61327;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = -191030472;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)27654;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned short)28169;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)48826;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-16526;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27178 : (unsigned short)20534;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
