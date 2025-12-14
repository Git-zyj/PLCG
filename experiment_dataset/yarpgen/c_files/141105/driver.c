#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 729069341U;
unsigned char var_3 = (unsigned char)228;
unsigned char var_4 = (unsigned char)155;
signed char var_5 = (signed char)-82;
unsigned int var_6 = 2525872387U;
unsigned long long int var_7 = 4998952753560758954ULL;
unsigned short var_8 = (unsigned short)24305;
unsigned short var_10 = (unsigned short)6974;
signed char var_11 = (signed char)2;
unsigned int var_13 = 1377558044U;
unsigned short var_14 = (unsigned short)8415;
short var_16 = (short)-13208;
int zero = 0;
unsigned int var_17 = 4178549650U;
unsigned short var_18 = (unsigned short)20015;
unsigned char var_19 = (unsigned char)168;
signed char var_20 = (signed char)-65;
signed char var_21 = (signed char)-45;
signed char var_22 = (signed char)54;
unsigned char var_23 = (unsigned char)23;
int var_24 = 1900719886;
signed char arr_0 [24] ;
_Bool arr_7 [24] [24] [24] [24] ;
unsigned int arr_8 [24] [24] ;
unsigned long long int arr_9 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 3999550826U : 40960639U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 5269522793497577804ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
