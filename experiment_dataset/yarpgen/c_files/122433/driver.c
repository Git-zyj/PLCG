#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55713;
short var_4 = (short)-24849;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-3750;
signed char var_7 = (signed char)112;
signed char var_8 = (signed char)40;
signed char var_9 = (signed char)-63;
unsigned short var_11 = (unsigned short)59369;
unsigned long long int var_12 = 18191308715883093863ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-99;
unsigned long long int var_16 = 11580113258583061105ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 12723599652500313193ULL;
unsigned short var_19 = (unsigned short)33971;
_Bool var_20 = (_Bool)0;
long long int var_21 = -4849622801603262244LL;
short arr_2 [24] ;
long long int arr_8 [24] [24] [24] [24] ;
unsigned short arr_10 [24] ;
signed char arr_12 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-27806;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 9179073881076319313LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)65225;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)-73;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
