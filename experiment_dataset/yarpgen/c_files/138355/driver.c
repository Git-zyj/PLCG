#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned char var_4 = (unsigned char)130;
unsigned long long int var_15 = 8870598715202305801ULL;
int zero = 0;
long long int var_17 = -9009581042996267680LL;
unsigned long long int var_18 = 9341094597926340387ULL;
unsigned long long int var_19 = 12949737695396196860ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned int arr_1 [25] ;
long long int arr_5 [11] [11] ;
signed char arr_3 [25] ;
unsigned char arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2705448743U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -791553764443185343LL : 1121860070592524100LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)142 : (unsigned char)26;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
