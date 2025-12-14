#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30151;
unsigned int var_2 = 957579136U;
unsigned short var_3 = (unsigned short)20845;
short var_4 = (short)-24510;
unsigned long long int var_5 = 4327579691184964815ULL;
int var_7 = -498243984;
unsigned int var_8 = 661285273U;
unsigned int var_9 = 53969286U;
short var_10 = (short)-27545;
unsigned int var_11 = 871606579U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)31;
unsigned int var_15 = 2226519045U;
unsigned char var_16 = (unsigned char)179;
short var_17 = (short)-23787;
int zero = 0;
unsigned int var_18 = 331793488U;
unsigned char var_19 = (unsigned char)138;
short var_20 = (short)5760;
unsigned int var_21 = 2300755541U;
unsigned short var_22 = (unsigned short)59969;
long long int var_23 = -6576274477598331399LL;
int var_24 = 301509550;
long long int var_25 = 8955320542051029335LL;
int var_26 = -1940117426;
unsigned int var_27 = 2097211378U;
unsigned int arr_0 [25] [25] ;
unsigned int arr_2 [25] [25] ;
unsigned char arr_3 [25] [25] ;
long long int arr_5 [25] ;
unsigned long long int arr_9 [25] ;
unsigned long long int arr_10 [25] [25] [25] ;
unsigned int arr_11 [25] [25] ;
unsigned short arr_15 [25] ;
short arr_16 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 3577029830U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 2604747230U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -5690026192561472404LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 13062495874119414090ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3795945704917897840ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = 3773312263U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned short)65073;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (short)-16580;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
