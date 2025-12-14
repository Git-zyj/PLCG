#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
long long int var_1 = 6315007814716818830LL;
signed char var_2 = (signed char)-43;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)137;
int var_12 = -942181169;
long long int var_15 = -6775504809629760591LL;
signed char var_18 = (signed char)43;
int zero = 0;
long long int var_20 = 3269862411290775411LL;
unsigned int var_21 = 2422655206U;
unsigned short var_22 = (unsigned short)13437;
unsigned int var_23 = 3297017650U;
int var_24 = 466739345;
unsigned char var_25 = (unsigned char)188;
long long int var_26 = 1871391173886875064LL;
signed char var_27 = (signed char)-78;
int var_28 = -801158285;
_Bool var_29 = (_Bool)1;
int var_30 = -1224283358;
unsigned short var_31 = (unsigned short)26195;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)23;
long long int var_34 = 523065411807162054LL;
short var_35 = (short)823;
unsigned char arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
short arr_5 [13] [13] ;
signed char arr_6 [13] [13] [13] [13] ;
short arr_8 [13] [13] [13] [13] ;
int arr_10 [13] [13] ;
signed char arr_12 [13] [13] ;
int arr_13 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 13756846417765920906ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-10845;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)12255;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 1355218626 : -46688622;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)7 : (signed char)24;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = -197014891;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
