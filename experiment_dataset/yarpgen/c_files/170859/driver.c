#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1738731030;
int var_3 = -1227756783;
unsigned int var_8 = 2534412705U;
int var_9 = 2055347417;
unsigned long long int var_11 = 16753958648578555178ULL;
unsigned int var_12 = 3167070076U;
signed char var_13 = (signed char)9;
signed char var_14 = (signed char)105;
signed char var_15 = (signed char)11;
signed char var_16 = (signed char)-29;
unsigned long long int var_19 = 9823595145002705029ULL;
int zero = 0;
unsigned long long int var_20 = 9071321658549913397ULL;
unsigned int var_21 = 107063948U;
unsigned long long int var_22 = 3629583163892891258ULL;
long long int var_23 = -12432469684819982LL;
signed char var_24 = (signed char)7;
unsigned long long int arr_0 [16] [16] ;
signed char arr_1 [16] ;
long long int arr_2 [16] ;
unsigned char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1364723670082551483ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -140648097524331673LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)123;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
