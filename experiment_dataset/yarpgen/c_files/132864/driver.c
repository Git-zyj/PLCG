#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2823138297162714428LL;
signed char var_9 = (signed char)80;
long long int var_10 = 110522171229282861LL;
signed char var_11 = (signed char)-32;
int zero = 0;
signed char var_14 = (signed char)-61;
signed char var_15 = (signed char)-104;
int var_16 = -1975849650;
signed char var_17 = (signed char)-113;
long long int var_18 = 5066939678724966313LL;
long long int var_19 = 421886599093855122LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)43;
_Bool arr_1 [21] [21] ;
int arr_7 [21] [21] [21] [21] ;
int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -504609534;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 184692162 : 1381044940;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
