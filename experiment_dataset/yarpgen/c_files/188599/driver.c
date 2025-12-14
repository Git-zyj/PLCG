#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 520246119;
unsigned short var_2 = (unsigned short)55701;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 10427910082528786158ULL;
unsigned char var_12 = (unsigned char)26;
unsigned short var_14 = (unsigned short)56953;
unsigned int var_15 = 4141696014U;
int zero = 0;
long long int var_18 = -4755276384723701398LL;
int var_19 = 80697564;
long long int var_20 = 7960837308353957801LL;
unsigned long long int arr_2 [21] [21] [21] ;
unsigned char arr_6 [21] [21] [21] ;
unsigned int arr_8 [21] [21] ;
int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14533284635594483728ULL : 16433892080336832755ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2863514438U : 3264264283U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = -227304212;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
