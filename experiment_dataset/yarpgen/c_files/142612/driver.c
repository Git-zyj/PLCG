#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
long long int var_8 = 9165316912492254796LL;
unsigned long long int var_12 = 7253498026141459745ULL;
unsigned long long int var_14 = 16685478486322895538ULL;
unsigned char var_16 = (unsigned char)51;
int zero = 0;
long long int var_17 = 3941780527791720536LL;
signed char var_18 = (signed char)117;
unsigned short var_19 = (unsigned short)51745;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8385302669848312153LL;
unsigned long long int var_22 = 7012280417600574083ULL;
unsigned short var_23 = (unsigned short)33904;
unsigned long long int var_24 = 14802111897696570976ULL;
unsigned long long int arr_0 [10] ;
_Bool arr_1 [10] [10] ;
unsigned long long int arr_2 [10] [10] ;
long long int arr_3 [10] ;
unsigned char arr_5 [10] [10] ;
unsigned int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4252595325512077111ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 18029467662867902174ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 7338989296764609009LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 3956054031U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
