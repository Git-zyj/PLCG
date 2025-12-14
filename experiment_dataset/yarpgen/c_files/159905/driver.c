#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1614693276U;
unsigned int var_6 = 3242802625U;
long long int var_7 = -8882648383102712744LL;
long long int var_9 = -8548498335529458700LL;
unsigned long long int var_10 = 6844620612103383384ULL;
int var_11 = -226451;
unsigned int var_17 = 1024378580U;
int zero = 0;
unsigned short var_18 = (unsigned short)2120;
unsigned char var_19 = (unsigned char)47;
long long int var_20 = 8043446042875210466LL;
long long int var_21 = 7351901117098032538LL;
unsigned int var_22 = 2043064941U;
unsigned long long int arr_1 [24] ;
long long int arr_2 [24] ;
int arr_3 [24] [24] [24] ;
long long int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1842168309903061418ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 5072571184130249633LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1267446476;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -7170359218281264341LL;
}

void checksum() {
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
