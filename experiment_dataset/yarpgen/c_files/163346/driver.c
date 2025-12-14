#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5287300334749969703ULL;
unsigned int var_3 = 2421668891U;
signed char var_5 = (signed char)-82;
long long int var_11 = -3630615005724747309LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 15150424621496814819ULL;
signed char var_17 = (signed char)-105;
unsigned int var_18 = 2032632169U;
unsigned short var_19 = (unsigned short)10255;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
long long int var_22 = -7467730514904456461LL;
long long int arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned char arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -8850274121377829999LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)46284 : (unsigned short)50080;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)19 : (unsigned char)14;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
