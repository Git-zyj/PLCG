#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3870;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-6345;
signed char var_8 = (signed char)-116;
signed char var_14 = (signed char)1;
int zero = 0;
int var_16 = 1143065414;
short var_17 = (short)-28983;
signed char var_18 = (signed char)-78;
long long int var_19 = 4955229841500506090LL;
unsigned char var_20 = (unsigned char)188;
unsigned int var_21 = 2138477850U;
short var_22 = (short)-16263;
unsigned char arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_2 [13] [13] [13] ;
int arr_3 [13] ;
signed char arr_4 [13] [13] ;
unsigned int arr_5 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 11121241872607066382ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7601492204486647631ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1149983934;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1365110289U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
