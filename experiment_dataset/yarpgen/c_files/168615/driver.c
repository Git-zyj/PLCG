#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned long long int var_1 = 11588594150074088082ULL;
unsigned char var_2 = (unsigned char)195;
long long int var_3 = -2787453956188722097LL;
long long int var_4 = -3731065463680215036LL;
int var_5 = 362103670;
unsigned char var_6 = (unsigned char)50;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6209063209626544348LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)137;
short var_11 = (short)5054;
int var_12 = 1968453197;
signed char var_13 = (signed char)21;
signed char var_14 = (signed char)-10;
unsigned long long int var_15 = 10244779254780989433ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1177470197559573559LL;
long long int var_18 = 2375581165974962376LL;
long long int var_19 = -2035163442823296285LL;
unsigned char var_20 = (unsigned char)222;
short var_21 = (short)27240;
long long int var_22 = -466807579362535087LL;
_Bool arr_0 [16] [16] ;
unsigned short arr_3 [14] [14] ;
_Bool arr_4 [14] [14] ;
_Bool arr_7 [12] ;
unsigned char arr_8 [12] [12] [12] ;
unsigned long long int arr_14 [15] [15] ;
_Bool arr_12 [12] [12] [12] ;
int arr_15 [15] ;
unsigned long long int arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)19985 : (unsigned short)48891;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 12875911883492461954ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 1641941505;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 10762238497532224142ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
