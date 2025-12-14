#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40270;
unsigned short var_2 = (unsigned short)3164;
unsigned short var_3 = (unsigned short)27352;
int var_4 = 979790768;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 4068065815U;
unsigned int var_8 = 3666443145U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)244;
int var_12 = 1304935753;
int var_13 = -189573716;
int zero = 0;
unsigned long long int var_15 = 13781419027698269116ULL;
unsigned long long int var_16 = 12732654927509555780ULL;
unsigned long long int var_17 = 11787050010635375838ULL;
unsigned long long int var_18 = 10441483830658621964ULL;
int var_19 = 2144257979;
unsigned char var_20 = (unsigned char)204;
unsigned long long int var_21 = 10942876060207756048ULL;
_Bool var_22 = (_Bool)0;
unsigned char arr_0 [18] ;
short arr_1 [18] [18] ;
long long int arr_3 [11] ;
_Bool arr_7 [11] [11] [11] [11] ;
short arr_10 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-18763 : (short)-24980;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -8081880677879107710LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-21603;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
