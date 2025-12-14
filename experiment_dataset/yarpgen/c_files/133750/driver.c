#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 915436931;
short var_1 = (short)4910;
unsigned long long int var_4 = 3575482594070729267ULL;
unsigned int var_6 = 3373213161U;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)61;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-58;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6930402340061126906ULL;
short var_15 = (short)2670;
long long int var_16 = -7013857815832963330LL;
unsigned int var_17 = 2321892675U;
unsigned short arr_0 [10] ;
short arr_2 [10] ;
unsigned short arr_4 [10] [10] [10] ;
unsigned long long int arr_6 [10] ;
short arr_8 [10] [10] [10] [10] ;
long long int arr_12 [10] ;
int arr_13 [10] [10] [10] [10] ;
signed char arr_16 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)29410;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-27222;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)45755;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 5692273884298702028ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)4254;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = -6192896835203891774LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 790847453;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)13;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
