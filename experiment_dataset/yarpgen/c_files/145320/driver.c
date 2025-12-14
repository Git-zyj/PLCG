#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)203;
unsigned char var_4 = (unsigned char)69;
unsigned int var_5 = 2659344002U;
signed char var_6 = (signed char)-95;
short var_7 = (short)-4680;
unsigned char var_8 = (unsigned char)68;
signed char var_10 = (signed char)-113;
unsigned long long int var_13 = 15616431158609053486ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -6252989792021227595LL;
unsigned char var_16 = (unsigned char)230;
int var_17 = -165750788;
int zero = 0;
unsigned char var_18 = (unsigned char)175;
unsigned short var_19 = (unsigned short)9218;
int var_20 = 1199951889;
int var_21 = 1071646312;
unsigned char var_22 = (unsigned char)87;
unsigned char arr_0 [20] ;
long long int arr_2 [20] [20] ;
short arr_3 [20] ;
int arr_4 [20] [20] [20] ;
unsigned char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -1128671384979276452LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-29895 : (short)10029;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 375577956 : -1690203253;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)46 : (unsigned char)183;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
