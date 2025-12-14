#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17442;
unsigned long long int var_3 = 12774118073003990294ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 12849796381936945870ULL;
unsigned short var_12 = (unsigned short)20366;
unsigned short var_13 = (unsigned short)64804;
short var_14 = (short)-16698;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)57638;
unsigned long long int arr_1 [25] ;
short arr_2 [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
unsigned long long int arr_4 [25] [25] [25] ;
int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 5136579270846711304ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)1406;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 37097240883952091ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 13293412243960051532ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -399243467;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
