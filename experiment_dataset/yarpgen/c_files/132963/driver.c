#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -212166176;
long long int var_1 = 1882428011283923945LL;
unsigned int var_2 = 4225040826U;
unsigned long long int var_3 = 13626417714279206499ULL;
signed char var_4 = (signed char)98;
unsigned char var_5 = (unsigned char)183;
signed char var_6 = (signed char)-121;
unsigned long long int var_7 = 1109071270257105199ULL;
long long int var_8 = -3626416455974212567LL;
signed char var_9 = (signed char)19;
int zero = 0;
signed char var_10 = (signed char)-58;
short var_11 = (short)-24582;
long long int var_12 = -481779623320504115LL;
signed char var_13 = (signed char)-91;
int var_14 = 1235868460;
long long int arr_0 [14] [14] ;
unsigned long long int arr_2 [14] [14] [14] ;
unsigned long long int arr_3 [14] [14] ;
long long int arr_5 [14] [14] [14] [14] ;
unsigned short arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -4832684668180045347LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 129117210265623729ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 11875927281624698039ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2161453111703598267LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)7481;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
