#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16641342144350879321ULL;
unsigned char var_2 = (unsigned char)240;
unsigned short var_4 = (unsigned short)51288;
unsigned long long int var_6 = 18408344986441343490ULL;
unsigned short var_7 = (unsigned short)63305;
unsigned int var_8 = 1042531466U;
int var_10 = 212362335;
unsigned char var_11 = (unsigned char)60;
unsigned long long int var_12 = 11300202587413828686ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)29;
int zero = 0;
signed char var_20 = (signed char)100;
int var_21 = -1365210797;
unsigned long long int var_22 = 8088615803961392682ULL;
unsigned short var_23 = (unsigned short)11145;
int arr_1 [18] ;
unsigned long long int arr_3 [18] ;
signed char arr_4 [18] ;
signed char arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -2137142606 : -1142440432;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 6626407986017741344ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)-76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-95 : (signed char)-113;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
