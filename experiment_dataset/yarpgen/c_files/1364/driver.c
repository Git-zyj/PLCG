#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33321;
unsigned long long int var_1 = 12544443163404980600ULL;
_Bool var_3 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)31249;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
unsigned short var_16 = (unsigned short)8397;
long long int var_17 = 4395930815580639473LL;
signed char var_18 = (signed char)113;
unsigned int var_19 = 880958264U;
unsigned char var_20 = (unsigned char)123;
long long int var_21 = -15560720737314541LL;
unsigned long long int var_22 = 8040421092985500236ULL;
long long int var_23 = 4720030170356494129LL;
long long int var_24 = -8506347501735622652LL;
short var_25 = (short)10878;
unsigned int var_26 = 4248734819U;
unsigned long long int arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
long long int arr_2 [12] ;
long long int arr_3 [12] [12] ;
unsigned int arr_4 [12] ;
signed char arr_5 [12] [12] ;
unsigned short arr_8 [12] ;
_Bool arr_10 [12] [12] [12] ;
unsigned char arr_12 [12] [12] [12] ;
unsigned short arr_15 [12] [12] [12] [12] [12] ;
unsigned int arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 12417944474543477001ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3987233790U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -6961300297869482403LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 8089704171471842132LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 4125287053U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned short)4639;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)39623;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2887608569U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
