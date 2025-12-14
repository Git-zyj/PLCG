#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1500256690;
short var_3 = (short)-27358;
long long int var_4 = 4277336842025887581LL;
unsigned char var_5 = (unsigned char)121;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)121;
int var_8 = -685945007;
long long int var_9 = 16056437608851027LL;
unsigned char var_15 = (unsigned char)30;
short var_16 = (short)-27420;
unsigned int var_18 = 4081307928U;
int zero = 0;
unsigned char var_20 = (unsigned char)31;
signed char var_21 = (signed char)-49;
unsigned char var_22 = (unsigned char)193;
long long int var_23 = -4715679441912573217LL;
int var_24 = 1524331582;
unsigned int var_25 = 930357943U;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 3063559774U;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)137;
unsigned long long int arr_0 [11] [11] ;
long long int arr_1 [11] ;
unsigned long long int arr_3 [11] [11] ;
unsigned long long int arr_4 [11] [11] ;
unsigned int arr_6 [11] [11] [11] ;
long long int arr_7 [11] ;
unsigned char arr_8 [11] [11] ;
unsigned long long int arr_9 [11] [11] [11] [11] ;
_Bool arr_11 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 7516970934844557462ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5968132176533975343LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 12357507488689237335ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 15522469629095310589ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4231771007U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -6024623279087378624LL : -2942016343433139780LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)149 : (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 14236752094887124196ULL : 14767295239727392448ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
