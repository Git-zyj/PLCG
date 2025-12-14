#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3844492198630187293ULL;
unsigned long long int var_1 = 2162613986037423571ULL;
int var_2 = -922586446;
int var_3 = 1948532205;
long long int var_5 = 5237735026357822677LL;
int var_6 = 350077938;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 10209595237854173775ULL;
int var_10 = 1192973323;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-27949;
short var_15 = (short)-3546;
unsigned short var_16 = (unsigned short)63630;
unsigned long long int var_17 = 13749314173201886969ULL;
signed char var_18 = (signed char)-14;
unsigned long long int var_19 = 18126406117290044610ULL;
unsigned short arr_6 [12] [12] ;
int arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)32571 : (unsigned short)62604;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1939856023 : 1003686223;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
