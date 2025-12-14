#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44986;
unsigned int var_2 = 1021069888U;
int var_5 = 2073719432;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3980523188U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)12688;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)33955;
long long int var_17 = 971298579836430390LL;
unsigned long long int var_18 = 13190518482901690741ULL;
int var_19 = -1042490638;
signed char var_20 = (signed char)11;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1349279779U;
unsigned short arr_0 [13] ;
unsigned long long int arr_1 [13] ;
unsigned short arr_9 [21] ;
signed char arr_11 [21] ;
int arr_13 [21] [21] ;
_Bool arr_2 [13] ;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44056 : (unsigned short)47320;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 13168556923741439726ULL : 17726903922901091044ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)17343;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 167632327;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
