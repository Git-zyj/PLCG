#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8479152140985845145ULL;
unsigned char var_1 = (unsigned char)120;
long long int var_2 = 3253302640659675731LL;
long long int var_3 = 1754907851148402624LL;
short var_4 = (short)14975;
long long int var_6 = 8271366483423350947LL;
int var_7 = 1865512756;
unsigned char var_8 = (unsigned char)101;
long long int var_9 = 2102755541905826984LL;
int zero = 0;
unsigned char var_12 = (unsigned char)117;
signed char var_13 = (signed char)-119;
signed char var_14 = (signed char)28;
long long int var_15 = -4754952630303284575LL;
short var_16 = (short)-29227;
short var_17 = (short)12367;
unsigned long long int arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
long long int arr_4 [15] [15] ;
short arr_5 [15] [15] [15] ;
int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 12023729684158479161ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 15030825425262106550ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -459360741533597267LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-15456;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -1718241675;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
