#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6283;
unsigned short var_4 = (unsigned short)45872;
long long int var_5 = 2703201988241635320LL;
int var_10 = 2126907635;
int zero = 0;
int var_16 = -1237953919;
unsigned short var_17 = (unsigned short)45357;
unsigned long long int var_18 = 1433093594262426527ULL;
unsigned short var_19 = (unsigned short)57568;
unsigned short var_20 = (unsigned short)44058;
unsigned short var_21 = (unsigned short)1329;
int var_22 = -735946783;
int arr_0 [14] ;
unsigned short arr_1 [14] ;
long long int arr_3 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1230617263;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)16611;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2089415771460959533LL;
}

void checksum() {
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
