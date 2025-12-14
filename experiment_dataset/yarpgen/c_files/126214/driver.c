#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -428645867505845365LL;
unsigned long long int var_4 = 15747087990118338704ULL;
unsigned int var_6 = 1431737889U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3250514481U;
unsigned char var_10 = (unsigned char)106;
unsigned short var_11 = (unsigned short)40;
unsigned short var_13 = (unsigned short)33964;
int zero = 0;
unsigned short var_15 = (unsigned short)41415;
long long int var_16 = -5181796624998617846LL;
short var_17 = (short)-17936;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)24;
unsigned int var_20 = 3164850470U;
unsigned char var_21 = (unsigned char)1;
unsigned short var_22 = (unsigned short)5949;
unsigned short var_23 = (unsigned short)32005;
unsigned char var_24 = (unsigned char)155;
unsigned short var_25 = (unsigned short)41424;
unsigned int var_26 = 675250328U;
unsigned char var_27 = (unsigned char)173;
unsigned short var_28 = (unsigned short)46141;
unsigned int var_29 = 2001353947U;
long long int var_30 = 1694233632611207386LL;
unsigned long long int var_31 = 9387556726653293428ULL;
long long int var_32 = 6441055471834199550LL;
unsigned char arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
unsigned short arr_4 [20] [20] ;
unsigned int arr_5 [20] [20] ;
unsigned int arr_8 [20] [20] [20] [20] ;
int arr_9 [20] [20] ;
unsigned int arr_12 [20] ;
unsigned int arr_17 [20] ;
_Bool arr_18 [20] [20] [20] [20] ;
_Bool arr_21 [20] [20] ;
short arr_25 [20] [20] [20] ;
unsigned int arr_33 [20] ;
_Bool arr_34 [20] [20] ;
signed char arr_40 [20] ;
unsigned long long int arr_3 [20] ;
short arr_6 [20] ;
short arr_15 [20] [20] ;
int arr_23 [20] [20] ;
unsigned int arr_26 [20] [20] [20] ;
int arr_31 [20] [20] [20] ;
unsigned int arr_36 [20] [20] [20] [20] ;
unsigned int arr_39 [20] ;
unsigned int arr_43 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 744681572U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)21580;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 2493480486U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 4030604399U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 1901163613;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 2822625775U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 748418155U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)9745;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 2950051744U : 1818528201U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_40 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 14654017042265309316ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-11778;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (short)27715;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = -1322341341;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 2032694879U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 185016041 : -507657086;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4097063529U : 1424976421U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = 428394824U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_43 [i_0] = 1279993771U;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
