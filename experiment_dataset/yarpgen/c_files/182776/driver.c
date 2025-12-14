#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39138;
int var_3 = -782893309;
unsigned char var_7 = (unsigned char)71;
_Bool var_8 = (_Bool)0;
long long int var_9 = 6961241615667134542LL;
long long int var_12 = 6361905723959499039LL;
unsigned char var_13 = (unsigned char)101;
int var_14 = 813520353;
unsigned int var_16 = 3967792675U;
unsigned short var_17 = (unsigned short)57208;
int zero = 0;
signed char var_18 = (signed char)-97;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4783429544420054132ULL;
int var_21 = -1761957499;
unsigned long long int var_22 = 7590141230987346082ULL;
unsigned char var_23 = (unsigned char)117;
unsigned char var_24 = (unsigned char)91;
long long int arr_3 [20] [20] ;
_Bool arr_4 [20] [20] [20] ;
_Bool arr_5 [20] ;
long long int arr_6 [20] [20] ;
unsigned int arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = -349913315717752963LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = -23212094131946982LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 41251239U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
