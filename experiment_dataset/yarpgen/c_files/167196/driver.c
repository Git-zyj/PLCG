#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39341;
unsigned long long int var_4 = 9939504694287605630ULL;
int var_5 = 1333848722;
short var_7 = (short)-2766;
short var_8 = (short)25168;
unsigned int var_9 = 2371966126U;
unsigned char var_12 = (unsigned char)237;
unsigned int var_13 = 1493828204U;
unsigned long long int var_14 = 5661169829350634869ULL;
signed char var_15 = (signed char)7;
unsigned int var_16 = 1423668894U;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -2885056379094528297LL;
long long int var_19 = -7868716768784738198LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)40791;
unsigned int var_22 = 767968394U;
unsigned int var_23 = 2272027124U;
short arr_9 [25] [25] [25] [25] ;
unsigned long long int arr_15 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)809;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 13151442755489009085ULL : 671926112386913631ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
