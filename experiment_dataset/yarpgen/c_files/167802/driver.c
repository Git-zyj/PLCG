#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 216263780322525983ULL;
unsigned int var_2 = 210722073U;
unsigned short var_3 = (unsigned short)8333;
unsigned int var_4 = 4066111841U;
unsigned long long int var_6 = 6823258953905482132ULL;
_Bool var_9 = (_Bool)0;
int var_12 = 312844610;
int var_13 = -630816437;
int zero = 0;
signed char var_15 = (signed char)124;
long long int var_16 = 8833904905416663948LL;
unsigned char var_17 = (unsigned char)72;
unsigned long long int var_18 = 16382392240280644390ULL;
unsigned char var_19 = (unsigned char)158;
unsigned long long int var_20 = 12650343397441644150ULL;
unsigned int arr_0 [11] ;
unsigned short arr_2 [11] ;
unsigned short arr_3 [11] ;
int arr_4 [11] [11] [11] ;
long long int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1216575113U : 1812155550U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)14608;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)32787;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 975488190;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -9025288546426800494LL : 2864141627156393901LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
