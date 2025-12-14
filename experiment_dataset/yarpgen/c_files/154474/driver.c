#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-27;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)168;
int zero = 0;
int var_14 = -427556565;
unsigned short var_15 = (unsigned short)31938;
long long int var_16 = -3709714276735087031LL;
unsigned long long int var_17 = 13173572720271247754ULL;
unsigned long long int var_18 = 7362687006484023150ULL;
signed char arr_2 [18] [18] [18] ;
int arr_3 [18] ;
signed char arr_4 [18] ;
int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -793016163;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 873234802 : 197097864;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
