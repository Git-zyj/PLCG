#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_14 = (short)-28803;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
unsigned short var_19 = (unsigned short)52089;
unsigned short var_20 = (unsigned short)37788;
unsigned long long int var_21 = 3941894787194269414ULL;
int var_22 = 313675324;
unsigned int arr_0 [11] ;
short arr_2 [15] ;
long long int arr_3 [15] ;
signed char arr_4 [15] ;
unsigned long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2808958947U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)8605;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 7045451693594293757LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 11354640760268337125ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
