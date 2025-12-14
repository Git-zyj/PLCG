#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5482621457295469866ULL;
long long int var_4 = 9175214063389164481LL;
signed char var_5 = (signed char)-121;
long long int var_6 = -3232066609423787245LL;
long long int var_8 = 437331759693264051LL;
unsigned long long int var_11 = 4505877088062838617ULL;
short var_12 = (short)-7425;
unsigned long long int var_16 = 18267559933329397311ULL;
long long int var_18 = -528307733324626068LL;
int zero = 0;
signed char var_19 = (signed char)44;
signed char var_20 = (signed char)11;
signed char var_21 = (signed char)95;
long long int var_22 = -1262741618281756451LL;
short var_23 = (short)-4390;
short arr_0 [10] [10] ;
unsigned long long int arr_1 [10] [10] ;
unsigned short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-21754;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 4717457430425015780ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)26990;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
