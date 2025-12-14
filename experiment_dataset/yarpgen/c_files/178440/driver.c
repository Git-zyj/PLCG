#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
unsigned char var_1 = (unsigned char)208;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)18;
unsigned int var_8 = 4180790990U;
long long int var_10 = -7229021509842079133LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)106;
int var_15 = 565394678;
long long int var_16 = -2171965397718032830LL;
short var_17 = (short)24297;
long long int var_18 = 2431970191995635819LL;
unsigned char var_19 = (unsigned char)156;
unsigned char var_20 = (unsigned char)170;
long long int var_21 = -1335965073079368712LL;
long long int var_22 = 4149006792100651479LL;
_Bool arr_0 [18] [18] ;
int arr_1 [18] [18] ;
unsigned int arr_4 [18] [18] ;
_Bool arr_5 [18] ;
_Bool arr_6 [18] ;
unsigned char arr_7 [18] ;
unsigned long long int arr_9 [18] [18] [18] [18] ;
long long int arr_11 [18] [18] [18] [18] ;
short arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 880875710;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2082327878U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 13245778687352834715ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -2695743111889597764LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (short)21150;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
