#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 3663792924372122930ULL;
unsigned long long int var_3 = 11894148333118416490ULL;
short var_5 = (short)466;
long long int var_7 = 4179556405115153844LL;
unsigned int var_8 = 2275561692U;
int var_11 = -1278682999;
signed char var_12 = (signed char)-12;
unsigned char var_14 = (unsigned char)60;
int zero = 0;
int var_20 = -187090944;
unsigned short var_21 = (unsigned short)49386;
unsigned long long int var_22 = 970630630272396462ULL;
unsigned int var_23 = 2796570190U;
unsigned short var_24 = (unsigned short)36787;
int arr_0 [16] ;
_Bool arr_1 [16] [16] ;
long long int arr_4 [20] [20] ;
long long int arr_5 [20] ;
signed char arr_9 [10] ;
short arr_3 [16] ;
short arr_6 [20] ;
unsigned int arr_7 [20] ;
int arr_10 [10] ;
unsigned long long int arr_11 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1100567057;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 8861226174365163555LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 4284813765333147977LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-7125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-4615 : (short)-3362;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 178133778U : 1769636319U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -305228237;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 11001917043917045074ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
