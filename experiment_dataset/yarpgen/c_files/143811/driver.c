#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9943547419833483159ULL;
unsigned char var_2 = (unsigned char)84;
int var_3 = -1585768630;
unsigned char var_4 = (unsigned char)148;
long long int var_5 = 8944227921096521391LL;
short var_7 = (short)-23741;
unsigned short var_8 = (unsigned short)51811;
signed char var_9 = (signed char)-86;
unsigned short var_10 = (unsigned short)64703;
unsigned char var_11 = (unsigned char)32;
int var_12 = -2014014271;
unsigned char var_14 = (unsigned char)13;
int zero = 0;
long long int var_15 = 4591913167767499888LL;
int var_16 = 1592078572;
int var_17 = -885088390;
unsigned char var_18 = (unsigned char)142;
int var_19 = 357396618;
short var_20 = (short)21388;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1004798613U;
signed char var_24 = (signed char)-85;
signed char var_25 = (signed char)-73;
short var_26 = (short)32150;
signed char var_27 = (signed char)59;
signed char var_28 = (signed char)-82;
signed char var_29 = (signed char)123;
unsigned char arr_1 [10] ;
short arr_3 [10] ;
int arr_5 [21] ;
signed char arr_6 [21] ;
signed char arr_8 [21] [21] [21] ;
int arr_11 [21] [21] [21] ;
_Bool arr_22 [15] ;
unsigned char arr_4 [10] ;
unsigned long long int arr_18 [21] ;
long long int arr_23 [15] ;
unsigned long long int arr_24 [15] ;
unsigned short arr_25 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-4335;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 91615773 : -88014458;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)36 : (signed char)99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -618432514;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 8405201403135088315ULL : 6326193601837033699ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = -1912731005854397720LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 14215370000479766117ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (unsigned short)28015;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
