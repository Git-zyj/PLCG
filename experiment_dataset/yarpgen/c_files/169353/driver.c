#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13750;
unsigned char var_3 = (unsigned char)131;
unsigned char var_5 = (unsigned char)193;
unsigned short var_6 = (unsigned short)43915;
unsigned short var_7 = (unsigned short)25585;
unsigned int var_8 = 3985727879U;
unsigned char var_9 = (unsigned char)163;
signed char var_11 = (signed char)-104;
unsigned short var_15 = (unsigned short)49870;
int zero = 0;
int var_19 = 1320521890;
unsigned long long int var_20 = 8350286131919273311ULL;
long long int var_21 = -9095805757023139683LL;
long long int var_22 = 5782381506614639088LL;
unsigned char var_23 = (unsigned char)26;
unsigned char arr_0 [25] ;
unsigned short arr_4 [25] [25] [25] ;
int arr_5 [25] [25] ;
int arr_6 [25] ;
int arr_7 [25] ;
unsigned short arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)28179;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -1459315607;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -1534644492;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 412580653;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned short)16821;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
