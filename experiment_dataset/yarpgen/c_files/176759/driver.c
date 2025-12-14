#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2907944063224519586LL;
int var_1 = -1262412493;
long long int var_2 = -2138187942063826485LL;
short var_3 = (short)26018;
_Bool var_4 = (_Bool)0;
long long int var_5 = 6337185923423835539LL;
int var_6 = -253875392;
unsigned char var_7 = (unsigned char)56;
short var_8 = (short)-11406;
unsigned long long int var_9 = 5363549237744050155ULL;
unsigned short var_10 = (unsigned short)12809;
unsigned char var_11 = (unsigned char)39;
unsigned char var_13 = (unsigned char)204;
int zero = 0;
unsigned long long int var_14 = 7051801418668621483ULL;
unsigned long long int arr_7 [15] [15] [15] [15] ;
int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 907642848276823631ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -2051859047;
}

void checksum() {
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
