#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
long long int var_1 = 922216440004379382LL;
signed char var_2 = (signed char)-78;
short var_4 = (short)-6509;
unsigned char var_8 = (unsigned char)158;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)36;
_Bool var_14 = (_Bool)0;
int var_15 = 29478072;
signed char var_16 = (signed char)26;
unsigned short var_18 = (unsigned short)22702;
int zero = 0;
unsigned short var_19 = (unsigned short)35179;
int var_20 = -459253301;
unsigned char var_21 = (unsigned char)116;
signed char var_22 = (signed char)90;
long long int var_23 = -6538111972470749652LL;
unsigned long long int var_24 = 1911552866897614988ULL;
unsigned long long int var_25 = 11795115193110030030ULL;
signed char arr_1 [18] ;
signed char arr_2 [18] [18] ;
unsigned char arr_4 [18] [18] ;
signed char arr_6 [18] [18] [18] ;
long long int arr_7 [18] [18] ;
unsigned long long int arr_9 [18] ;
_Bool arr_14 [18] [18] ;
unsigned long long int arr_15 [18] [18] ;
long long int arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1682528721141408528LL : -745381722168153483LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2590194384887539660ULL : 13326794383844892390ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = 18039672913318463897ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = -9163318902585522208LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
