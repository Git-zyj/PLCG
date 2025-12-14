#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10052534574866447382ULL;
long long int var_5 = 4678443641477282699LL;
unsigned int var_6 = 785091529U;
signed char var_8 = (signed char)-87;
unsigned short var_9 = (unsigned short)11202;
_Bool var_10 = (_Bool)1;
short var_15 = (short)13809;
int var_16 = 1359915210;
signed char var_18 = (signed char)-62;
int zero = 0;
unsigned int var_19 = 3551496442U;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1846650459846407236LL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-49;
unsigned int var_24 = 1957532684U;
int var_25 = -2083003556;
short var_26 = (short)-24636;
_Bool var_27 = (_Bool)1;
unsigned char arr_0 [15] ;
unsigned int arr_4 [15] ;
int arr_7 [25] ;
_Bool arr_13 [25] [25] [25] ;
unsigned long long int arr_2 [15] [15] ;
_Bool arr_6 [15] ;
unsigned short arr_15 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 2059907038U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 1670864698;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 4736063722228552067ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)57299 : (unsigned short)55907;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
