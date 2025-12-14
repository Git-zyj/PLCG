#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2906980866U;
long long int var_5 = 3973807399540709483LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 2073378486239265632LL;
unsigned int var_9 = 3697178979U;
unsigned short var_14 = (unsigned short)8508;
int zero = 0;
unsigned int var_16 = 717215828U;
signed char var_17 = (signed char)77;
unsigned int var_18 = 4266232948U;
unsigned int var_19 = 1438832208U;
short var_20 = (short)22322;
short var_21 = (short)-12418;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned char arr_0 [14] ;
unsigned short arr_1 [14] ;
short arr_3 [14] [14] ;
unsigned int arr_4 [14] [14] [14] ;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)6371;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-30337;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1136464949U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-85;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
