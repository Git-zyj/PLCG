#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7973007847798124494LL;
short var_3 = (short)28063;
signed char var_5 = (signed char)106;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3378870656U;
unsigned long long int var_11 = 15181799520144592918ULL;
unsigned char var_12 = (unsigned char)159;
unsigned char var_13 = (unsigned char)179;
unsigned int var_14 = 1301053163U;
short var_15 = (short)-4608;
signed char var_18 = (signed char)67;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)59;
int var_21 = -80607315;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)27972;
short var_24 = (short)23756;
unsigned short var_25 = (unsigned short)11769;
unsigned int var_26 = 1774709656U;
unsigned short var_27 = (unsigned short)43815;
int arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned short arr_3 [15] [15] ;
signed char arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1676751094;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)27732;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-75;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
