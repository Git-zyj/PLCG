#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31295;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-3103;
signed char var_8 = (signed char)-8;
signed char var_13 = (signed char)-79;
unsigned char var_16 = (unsigned char)50;
int var_18 = 756576823;
int zero = 0;
signed char var_19 = (signed char)-71;
long long int var_20 = 4828645885740883802LL;
_Bool var_21 = (_Bool)1;
int var_22 = -460375044;
signed char var_23 = (signed char)-70;
unsigned int var_24 = 795314911U;
int var_25 = 329537022;
unsigned long long int var_26 = 10341453004784648965ULL;
_Bool var_27 = (_Bool)0;
signed char arr_0 [17] ;
unsigned long long int arr_2 [17] ;
_Bool arr_4 [15] ;
unsigned long long int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3858986059931306454ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 9902772801659694300ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
