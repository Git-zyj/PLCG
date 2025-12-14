#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -897393772;
signed char var_5 = (signed char)11;
signed char var_8 = (signed char)18;
long long int var_9 = -7091986751140138768LL;
unsigned long long int var_10 = 3122794743801315823ULL;
int var_11 = 941174449;
signed char var_12 = (signed char)-27;
int var_14 = 654125617;
unsigned char var_15 = (unsigned char)242;
int zero = 0;
unsigned long long int var_20 = 12246338073020032601ULL;
short var_21 = (short)-18984;
signed char var_22 = (signed char)98;
signed char var_23 = (signed char)116;
unsigned long long int var_24 = 13936686172890415810ULL;
int var_25 = 999122351;
signed char arr_1 [13] [13] ;
int arr_4 [13] [13] [13] ;
unsigned char arr_7 [13] [13] [13] ;
unsigned int arr_8 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1016497317 : -117056341;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)242 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1726064594U : 2036332740U;
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
