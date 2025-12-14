#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)139;
unsigned char var_8 = (unsigned char)67;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)234;
unsigned short var_16 = (unsigned short)8292;
int zero = 0;
unsigned char var_18 = (unsigned char)29;
unsigned char var_19 = (unsigned char)10;
unsigned long long int var_20 = 9206795074508152702ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-22847;
unsigned char var_23 = (unsigned char)161;
_Bool arr_0 [20] ;
unsigned long long int arr_1 [20] ;
_Bool arr_4 [20] ;
short arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12356441763303684374ULL : 10745679537708352611ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-15245 : (short)24480;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
