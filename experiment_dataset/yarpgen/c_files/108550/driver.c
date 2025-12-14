#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
unsigned short var_1 = (unsigned short)19913;
short var_5 = (short)-25104;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)52558;
unsigned char var_8 = (unsigned char)12;
int var_11 = -14661061;
unsigned int var_12 = 3567969457U;
unsigned int var_13 = 132483391U;
int zero = 0;
unsigned long long int var_15 = 17623560173640467630ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)119;
unsigned char var_18 = (unsigned char)181;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8089277723593326340LL;
long long int var_21 = -4461702988351445032LL;
signed char var_22 = (signed char)-39;
short arr_0 [22] ;
long long int arr_1 [22] ;
signed char arr_2 [22] ;
unsigned long long int arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)16817;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4521894379098271257LL : -783786141826669910LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 12528373652204361886ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
