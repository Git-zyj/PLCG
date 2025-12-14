#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
unsigned int var_1 = 3035710976U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_7 = (short)6409;
unsigned char var_10 = (unsigned char)131;
_Bool var_12 = (_Bool)0;
int var_13 = 1218949841;
unsigned long long int var_16 = 2297822666998062786ULL;
int var_17 = -1291764901;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4200198082218025029LL;
int var_20 = -40613540;
unsigned int var_21 = 3528465228U;
long long int var_22 = -6563906704579803522LL;
long long int arr_0 [10] [10] ;
unsigned long long int arr_1 [10] ;
signed char arr_2 [10] [10] ;
signed char arr_3 [10] ;
short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -579330034426805400LL : 4276736511556800574LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 10474165470577380770ULL : 6156144526547607796ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-7960 : (short)16547;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
