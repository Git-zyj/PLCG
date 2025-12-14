#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
signed char var_1 = (signed char)-126;
unsigned long long int var_3 = 587801553862243480ULL;
short var_4 = (short)-8887;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-13114;
int var_7 = 512301339;
short var_8 = (short)-27998;
unsigned long long int var_9 = 7815220115394839602ULL;
int zero = 0;
unsigned int var_11 = 2676487505U;
int var_12 = 1887148249;
long long int var_13 = 3084289471164109485LL;
unsigned char var_14 = (unsigned char)147;
_Bool var_15 = (_Bool)1;
unsigned int arr_2 [16] ;
unsigned long long int arr_3 [16] [16] ;
signed char arr_6 [16] [16] [16] ;
long long int arr_7 [16] [16] [16] [16] ;
unsigned int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 3223186814U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 7566004195721141947ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 5740109121181599794LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 2159324861U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
