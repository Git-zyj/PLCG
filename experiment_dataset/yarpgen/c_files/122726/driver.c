#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2957;
long long int var_5 = 8477233910284384659LL;
unsigned long long int var_6 = 18123496198297983851ULL;
long long int var_7 = 3725518378668102598LL;
unsigned int var_8 = 216764323U;
long long int var_9 = 6785550097669711323LL;
unsigned long long int var_10 = 736642251968447362ULL;
long long int var_11 = -2409312973927380674LL;
int zero = 0;
int var_12 = -1020497225;
int var_13 = -1338583782;
long long int var_14 = 409561627718003095LL;
signed char var_15 = (signed char)-2;
unsigned char var_16 = (unsigned char)10;
signed char arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_3 [22] ;
short arr_4 [22] [22] [22] [22] ;
long long int arr_6 [22] [22] [22] [22] ;
long long int arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)92 : (signed char)65;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-13781 : (short)-10292;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1668551928047005322LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -3194336867750265129LL : 166810679390738180LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
