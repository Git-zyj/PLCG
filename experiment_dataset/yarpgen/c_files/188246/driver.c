#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)109;
unsigned int var_9 = 2558374636U;
unsigned char var_11 = (unsigned char)93;
int zero = 0;
unsigned char var_16 = (unsigned char)122;
unsigned short var_17 = (unsigned short)43996;
long long int var_18 = -7329951706346107868LL;
unsigned char var_19 = (unsigned char)196;
signed char var_20 = (signed char)109;
int var_21 = 455451345;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 5324763053982331028ULL;
unsigned short var_24 = (unsigned short)29908;
long long int var_25 = 2310116098674441064LL;
int arr_6 [13] ;
signed char arr_8 [21] ;
short arr_9 [21] ;
unsigned long long int arr_3 [12] ;
unsigned int arr_16 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1571715630;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (short)-7613;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3228508166691733936ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 102275238U : 3903345473U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
