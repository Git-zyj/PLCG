#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned char var_1 = (unsigned char)3;
int var_2 = 1589744542;
short var_3 = (short)3240;
unsigned char var_4 = (unsigned char)18;
unsigned char var_5 = (unsigned char)47;
signed char var_6 = (signed char)-38;
unsigned long long int var_7 = 1032437510851424823ULL;
unsigned char var_8 = (unsigned char)14;
unsigned char var_9 = (unsigned char)33;
int zero = 0;
short var_10 = (short)-27531;
unsigned int var_11 = 3679006292U;
unsigned long long int var_12 = 8902356791095847640ULL;
unsigned int var_13 = 1257623830U;
unsigned short var_14 = (unsigned short)57468;
unsigned char var_15 = (unsigned char)229;
unsigned short var_16 = (unsigned short)62346;
unsigned char var_17 = (unsigned char)245;
unsigned long long int var_18 = 587642812163064823ULL;
short var_19 = (short)26534;
signed char arr_1 [19] ;
unsigned char arr_3 [19] [19] ;
int arr_6 [19] ;
int arr_7 [19] ;
signed char arr_10 [19] [19] [19] ;
unsigned long long int arr_12 [19] [19] ;
unsigned char arr_15 [17] [17] ;
unsigned int arr_18 [17] ;
short arr_5 [19] [19] ;
unsigned int arr_8 [19] ;
signed char arr_9 [19] [19] ;
short arr_13 [19] ;
signed char arr_14 [19] ;
signed char arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1631307919 : 1765378006;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1049329662;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 10742020024582625970ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 2783271912U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)15431 : (short)21389;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3773360757U : 1462192274U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)114 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-4875 : (short)-12910;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)124 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (signed char)42;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
