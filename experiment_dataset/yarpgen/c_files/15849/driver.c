#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 115840225U;
unsigned char var_1 = (unsigned char)220;
unsigned long long int var_2 = 17971182718530762651ULL;
short var_9 = (short)3774;
signed char var_13 = (signed char)113;
signed char var_15 = (signed char)6;
unsigned long long int var_16 = 5910110646225553511ULL;
int zero = 0;
signed char var_18 = (signed char)-55;
unsigned char var_19 = (unsigned char)60;
signed char var_20 = (signed char)89;
short var_21 = (short)-14005;
long long int var_22 = -55953337644172106LL;
unsigned long long int var_23 = 10742612627205519625ULL;
unsigned long long int arr_2 [24] [24] ;
unsigned char arr_4 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 11464711335477155191ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned char)203;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
