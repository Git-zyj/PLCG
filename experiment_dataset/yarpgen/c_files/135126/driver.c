#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
long long int var_3 = 5242704097298904165LL;
unsigned char var_4 = (unsigned char)213;
unsigned char var_5 = (unsigned char)177;
long long int var_6 = 8369786414228259215LL;
int var_8 = -1954234793;
unsigned long long int var_10 = 5962776462098923678ULL;
long long int var_11 = 3502215646848080628LL;
long long int var_12 = -8030188173416328348LL;
unsigned char var_13 = (unsigned char)82;
int var_14 = -617586569;
unsigned long long int var_16 = 1011369018650569082ULL;
unsigned char var_17 = (unsigned char)8;
int zero = 0;
unsigned int var_18 = 3361582084U;
int var_19 = -408373635;
_Bool var_20 = (_Bool)1;
long long int var_21 = -5209690661308591426LL;
unsigned long long int var_22 = 13648194998468855184ULL;
long long int var_23 = -7457410870895963568LL;
unsigned short var_24 = (unsigned short)55550;
long long int var_25 = -142999172189004813LL;
unsigned long long int var_26 = 12974684347828061733ULL;
int var_27 = -304204316;
unsigned short arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
_Bool arr_2 [17] ;
long long int arr_3 [17] [17] ;
short arr_9 [17] ;
unsigned long long int arr_6 [17] [17] [17] ;
unsigned int arr_7 [17] [17] [17] ;
unsigned long long int arr_8 [17] [17] ;
unsigned char arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)33375;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)6091;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 5048085593739421281LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (short)30885;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 13603165664372895032ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4210836750U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 9722287231667680934ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned char)155;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
