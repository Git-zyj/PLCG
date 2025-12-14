#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44247;
unsigned char var_4 = (unsigned char)2;
unsigned short var_5 = (unsigned short)51662;
unsigned long long int var_6 = 5431109600886439409ULL;
unsigned long long int var_7 = 12628050986362401003ULL;
unsigned char var_10 = (unsigned char)178;
signed char var_11 = (signed char)25;
long long int var_12 = -2794980726829684650LL;
int var_14 = 1940265259;
int var_16 = 625171370;
int zero = 0;
unsigned char var_17 = (unsigned char)161;
unsigned char var_18 = (unsigned char)180;
unsigned long long int var_19 = 6848259784150511788ULL;
long long int var_20 = 4353049844432426377LL;
unsigned int var_21 = 1187021800U;
long long int var_22 = -8986343743172319580LL;
unsigned char var_23 = (unsigned char)156;
unsigned long long int var_24 = 12896946187564117365ULL;
unsigned long long int var_25 = 18252598036834745590ULL;
unsigned char var_26 = (unsigned char)253;
signed char var_27 = (signed char)-1;
unsigned int var_28 = 3042790131U;
unsigned long long int var_29 = 4488579736905321158ULL;
unsigned int var_30 = 1255983071U;
unsigned int var_31 = 618440837U;
unsigned long long int arr_0 [11] ;
long long int arr_4 [11] ;
unsigned short arr_5 [11] [11] [11] ;
signed char arr_6 [11] [11] [11] ;
long long int arr_10 [11] [11] ;
signed char arr_13 [11] ;
unsigned long long int arr_19 [11] [11] [11] ;
int arr_8 [11] [11] ;
unsigned char arr_11 [11] [11] [11] ;
signed char arr_21 [11] [11] [11] ;
unsigned char arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3989281162964551608ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 247119680183789845LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)8576;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = -7139602406053497547LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 2829028867694351795ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 125819133;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (unsigned char)118;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
