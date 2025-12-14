#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned int var_2 = 1276940244U;
signed char var_5 = (signed char)-104;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2071881447287607305LL;
unsigned short var_8 = (unsigned short)60587;
unsigned char var_9 = (unsigned char)156;
unsigned char var_10 = (unsigned char)65;
unsigned short var_12 = (unsigned short)19659;
long long int var_13 = -1851532266808179102LL;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)79;
unsigned short var_17 = (unsigned short)13203;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = -1288138353;
long long int var_21 = -5956885361366431225LL;
long long int var_22 = -2744527246274437786LL;
long long int var_23 = -1976960088168841893LL;
unsigned short var_24 = (unsigned short)49501;
unsigned char var_25 = (unsigned char)30;
long long int arr_0 [11] ;
unsigned short arr_2 [11] [11] [11] ;
long long int arr_3 [11] ;
unsigned int arr_4 [11] ;
long long int arr_5 [11] [11] ;
unsigned short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -6177786277475773891LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)31139;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -214114924332726487LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 6728046U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 416313645285345749LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)30728;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
