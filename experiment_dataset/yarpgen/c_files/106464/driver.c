#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3897129307379213281LL;
unsigned char var_3 = (unsigned char)172;
long long int var_7 = 8720376764939831004LL;
unsigned int var_8 = 2804877926U;
signed char var_9 = (signed char)-38;
int var_10 = 1886245153;
long long int var_11 = 7430823206638221004LL;
int var_12 = -90349275;
unsigned char var_14 = (unsigned char)98;
int var_16 = -215161383;
int zero = 0;
long long int var_17 = -2869499524809527208LL;
unsigned char var_18 = (unsigned char)235;
unsigned char var_19 = (unsigned char)74;
int var_20 = -706003347;
unsigned int arr_0 [11] [11] ;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 3282400505U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -5259857962666170075LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
