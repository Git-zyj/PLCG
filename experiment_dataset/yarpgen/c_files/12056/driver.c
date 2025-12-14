#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 244603987U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 7593724069780271333ULL;
_Bool var_7 = (_Bool)0;
short var_11 = (short)-8183;
signed char var_15 = (signed char)67;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8139782000486060510LL;
unsigned short var_18 = (unsigned short)52965;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 9876570765505229288ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-3096;
int var_23 = 52262956;
signed char var_24 = (signed char)35;
long long int var_25 = 5207691797265345826LL;
int var_26 = 1304494964;
unsigned int arr_1 [18] ;
unsigned int arr_2 [18] ;
short arr_7 [18] [18] [18] ;
signed char arr_8 [23] [23] ;
long long int arr_9 [23] [23] ;
int arr_11 [25] ;
unsigned short arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3760717343U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2917342193U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-12943;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 6080283461741435121LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -650158458;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (unsigned short)8168;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
