#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16567;
unsigned short var_2 = (unsigned short)33857;
signed char var_3 = (signed char)-65;
unsigned char var_5 = (unsigned char)36;
unsigned int var_8 = 1390011858U;
long long int var_12 = 2232463804425666969LL;
unsigned short var_15 = (unsigned short)43229;
unsigned long long int var_16 = 17720753780337846376ULL;
unsigned char var_17 = (unsigned char)8;
int zero = 0;
unsigned short var_19 = (unsigned short)4331;
short var_20 = (short)15916;
unsigned long long int var_21 = 6082071652686249173ULL;
unsigned short var_22 = (unsigned short)35924;
unsigned short var_23 = (unsigned short)10649;
unsigned short var_24 = (unsigned short)58577;
unsigned char var_25 = (unsigned char)217;
signed char arr_0 [23] ;
unsigned long long int arr_1 [23] ;
int arr_7 [23] ;
unsigned int arr_2 [23] ;
unsigned long long int arr_3 [23] [23] ;
_Bool arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 11773638607166264839ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -867886934;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 808516975U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 16625542398301838384ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
