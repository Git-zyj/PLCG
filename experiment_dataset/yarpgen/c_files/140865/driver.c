#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23780;
unsigned long long int var_1 = 15297163159481846031ULL;
unsigned int var_2 = 1021298111U;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)50353;
unsigned char var_7 = (unsigned char)102;
long long int var_12 = -7419138278365939845LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 13670905770128746761ULL;
int zero = 0;
long long int var_16 = 3961830964236272068LL;
int var_17 = 1113821159;
short var_18 = (short)-23340;
signed char var_19 = (signed char)18;
signed char var_20 = (signed char)-117;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-125;
unsigned int arr_0 [19] ;
unsigned int arr_5 [19] ;
unsigned short arr_2 [19] ;
unsigned short arr_6 [19] [19] ;
unsigned char arr_9 [19] ;
unsigned int arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2009245869U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1234942601U : 3511401713U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)61861;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)44967 : (unsigned short)45548;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)41 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 2108617449U : 3162141480U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
