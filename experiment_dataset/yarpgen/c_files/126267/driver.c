#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7363940512275416361LL;
int var_6 = -1367851578;
unsigned char var_7 = (unsigned char)193;
unsigned int var_9 = 1117708356U;
unsigned char var_11 = (unsigned char)160;
int zero = 0;
unsigned char var_14 = (unsigned char)163;
unsigned char var_15 = (unsigned char)64;
unsigned long long int var_16 = 9594341067576287862ULL;
signed char var_17 = (signed char)33;
long long int var_18 = 2930954405720800501LL;
short var_19 = (short)-10827;
unsigned char var_20 = (unsigned char)60;
unsigned long long int var_21 = 12805269328661597330ULL;
unsigned int var_22 = 4250446435U;
short arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
unsigned char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned char arr_5 [23] [23] ;
unsigned int arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-3088;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1678424684U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4931338925550349098ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 2042908775U;
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
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
