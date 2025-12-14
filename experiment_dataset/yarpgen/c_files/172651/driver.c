#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
unsigned int var_1 = 3805463020U;
signed char var_2 = (signed char)43;
unsigned char var_3 = (unsigned char)230;
signed char var_4 = (signed char)-17;
unsigned char var_5 = (unsigned char)205;
unsigned short var_6 = (unsigned short)55407;
short var_7 = (short)-6526;
short var_8 = (short)32633;
unsigned short var_9 = (unsigned short)44412;
unsigned long long int var_10 = 11015776324722586134ULL;
unsigned int var_11 = 3850097103U;
int zero = 0;
int var_12 = -1999635422;
short var_13 = (short)-18272;
int var_14 = -586525476;
unsigned short var_15 = (unsigned short)36040;
signed char var_16 = (signed char)16;
unsigned char var_17 = (unsigned char)239;
long long int var_18 = -8858295309477127184LL;
long long int var_19 = -3702708195263109049LL;
signed char var_20 = (signed char)-74;
signed char var_21 = (signed char)-25;
int var_22 = -320087464;
unsigned char var_23 = (unsigned char)22;
signed char arr_0 [10] ;
short arr_1 [10] [10] ;
unsigned long long int arr_2 [10] [10] [10] ;
unsigned char arr_3 [10] [10] ;
unsigned int arr_10 [12] ;
unsigned char arr_11 [12] ;
short arr_12 [12] ;
signed char arr_13 [12] [12] ;
short arr_14 [12] [12] [12] ;
unsigned short arr_15 [12] ;
short arr_16 [12] ;
unsigned char arr_17 [12] [12] [12] [12] ;
unsigned long long int arr_8 [10] [10] [10] [10] ;
_Bool arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-66 : (signed char)127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)6151;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3502805165713461767ULL : 12831303073841413911ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 3085373318U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (short)-30844;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)17527;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned short)34240;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (short)-6795;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 15282732239001393187ULL : 11682184107084064060ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
