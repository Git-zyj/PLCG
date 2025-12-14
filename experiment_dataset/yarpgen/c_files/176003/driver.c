#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3291338075U;
short var_2 = (short)20726;
unsigned int var_3 = 2346422795U;
unsigned int var_7 = 3311524275U;
unsigned short var_9 = (unsigned short)27755;
unsigned int var_10 = 3774073720U;
int zero = 0;
short var_11 = (short)9665;
unsigned char var_12 = (unsigned char)252;
short var_13 = (short)-9092;
unsigned long long int arr_2 [10] ;
int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1387239867372396251ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -1536737868;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
