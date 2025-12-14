#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8733695401726214213ULL;
signed char var_2 = (signed char)86;
unsigned short var_5 = (unsigned short)57755;
int var_6 = 2093696684;
long long int var_9 = -4728225606308941155LL;
unsigned char var_13 = (unsigned char)129;
int var_14 = -42507008;
unsigned int var_15 = 219324612U;
unsigned char var_16 = (unsigned char)181;
int zero = 0;
short var_20 = (short)31743;
unsigned long long int var_21 = 11759693445749215210ULL;
unsigned int var_22 = 67258784U;
long long int var_23 = -8497302561398824030LL;
long long int var_24 = -9110873649442464244LL;
long long int var_25 = 5142326133049406255LL;
long long int var_26 = -8314835819319886720LL;
int var_27 = 1243527949;
int arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned char arr_3 [10] [10] [10] ;
unsigned char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -606540956;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)169;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
