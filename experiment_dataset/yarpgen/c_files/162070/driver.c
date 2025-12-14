#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3885424139U;
long long int var_1 = -1176212319468106755LL;
unsigned short var_2 = (unsigned short)37306;
unsigned short var_3 = (unsigned short)15314;
long long int var_5 = -8681147972834623394LL;
int var_6 = -821288041;
unsigned short var_8 = (unsigned short)45804;
long long int var_10 = -2809584743431726398LL;
unsigned short var_11 = (unsigned short)51868;
int var_13 = -701172046;
int zero = 0;
unsigned short var_17 = (unsigned short)34971;
unsigned short var_18 = (unsigned short)55778;
long long int var_19 = 5198757031409633264LL;
int var_20 = 892516993;
unsigned short var_21 = (unsigned short)43149;
int var_22 = -1530976896;
unsigned short var_23 = (unsigned short)45841;
unsigned int var_24 = 1331701857U;
int arr_7 [11] [11] [11] ;
unsigned int arr_8 [11] [11] ;
long long int arr_15 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1025162753 : 1041036292;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 938168662U : 698960669U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = -1404386479332219998LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
