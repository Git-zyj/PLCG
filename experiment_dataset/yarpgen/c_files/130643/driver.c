#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 179734971U;
short var_4 = (short)-31385;
unsigned int var_6 = 1424558380U;
long long int var_7 = -9092726493572961216LL;
int var_8 = 1866709216;
unsigned int var_9 = 632971870U;
int zero = 0;
long long int var_16 = -1133880351514699362LL;
long long int var_17 = 1860284113327834679LL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 3717375010268196694ULL;
unsigned short var_20 = (unsigned short)19032;
signed char arr_3 [25] ;
unsigned long long int arr_5 [25] ;
unsigned int arr_6 [25] [25] [25] ;
unsigned int arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 5702568587076212356ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2095753367U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3708900325U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
