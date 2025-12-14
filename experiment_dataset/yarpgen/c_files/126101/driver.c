#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16788;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 7181475560607877313ULL;
unsigned int var_4 = 3821241427U;
int var_5 = -2126995729;
unsigned int var_6 = 772838859U;
long long int var_9 = -4728298107246196004LL;
unsigned int var_11 = 346548544U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-19073;
int zero = 0;
long long int var_16 = 4149283972017954617LL;
long long int var_17 = -303969181599099092LL;
unsigned long long int var_18 = 2159558359091992420ULL;
unsigned long long int var_19 = 1927322297764802382ULL;
unsigned long long int var_20 = 11838023451460390788ULL;
long long int var_21 = 5942682020004623072LL;
unsigned char var_22 = (unsigned char)13;
_Bool var_23 = (_Bool)0;
int var_24 = 611643664;
unsigned char var_25 = (unsigned char)228;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 5547415328670019821ULL;
long long int var_28 = -8589728809045434903LL;
unsigned short var_29 = (unsigned short)6182;
unsigned long long int var_30 = 12669621819833429338ULL;
unsigned int var_31 = 1762878907U;
int arr_1 [15] ;
unsigned long long int arr_4 [20] [20] ;
signed char arr_5 [20] ;
unsigned char arr_6 [20] [20] ;
int arr_7 [20] [20] ;
signed char arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1347074792;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 10836301132170507813ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 765490207;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-19 : (signed char)-66;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
