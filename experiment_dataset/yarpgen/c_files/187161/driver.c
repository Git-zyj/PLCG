#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9380399295980323722ULL;
short var_3 = (short)3914;
unsigned long long int var_5 = 8746036544117095428ULL;
unsigned int var_6 = 899474559U;
unsigned int var_7 = 552058025U;
int var_8 = -1222064954;
unsigned char var_10 = (unsigned char)130;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)37244;
int zero = 0;
signed char var_17 = (signed char)56;
unsigned short var_18 = (unsigned short)57932;
int var_19 = -1492650839;
short var_20 = (short)24631;
short var_21 = (short)-6491;
unsigned char var_22 = (unsigned char)119;
int var_23 = -1065004578;
unsigned long long int var_24 = 6180075987189966350ULL;
unsigned int var_25 = 1193325685U;
unsigned int arr_1 [24] [24] ;
unsigned int arr_2 [24] [24] ;
long long int arr_3 [24] [24] [24] ;
int arr_4 [24] ;
unsigned char arr_6 [24] [24] ;
signed char arr_7 [24] [24] [24] ;
short arr_8 [24] [24] [24] ;
long long int arr_10 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1147986893U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1923691011U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -8514699057324970950LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1465686752;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-4496;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 216869854688708768LL;
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
