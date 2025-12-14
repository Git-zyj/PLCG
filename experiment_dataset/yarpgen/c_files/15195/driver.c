#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
unsigned int var_3 = 838092283U;
long long int var_4 = 6532694445290866657LL;
unsigned int var_6 = 2201458440U;
unsigned short var_8 = (unsigned short)29926;
short var_9 = (short)-16590;
int var_10 = 861772009;
unsigned short var_11 = (unsigned short)50980;
unsigned char var_12 = (unsigned char)77;
int zero = 0;
long long int var_13 = -6454281721687496876LL;
int var_14 = -679944250;
int var_15 = -1821857737;
long long int var_16 = -4686820032621749495LL;
long long int var_17 = -1141627240613490303LL;
int var_18 = -841042351;
int var_19 = -1287933265;
unsigned int var_20 = 1454135302U;
unsigned int var_21 = 1823044677U;
long long int var_22 = 4773807927403283597LL;
_Bool var_23 = (_Bool)0;
short arr_0 [24] ;
unsigned int arr_1 [24] ;
long long int arr_3 [24] ;
long long int arr_4 [24] [24] [24] ;
int arr_7 [24] [24] [24] ;
signed char arr_8 [24] [24] ;
unsigned long long int arr_9 [24] ;
unsigned long long int arr_10 [24] ;
unsigned short arr_2 [24] ;
unsigned long long int arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)16585;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 4258087030U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -2869035275095306748LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2358552819251578364LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1141191332;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 7541143879533288790ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 16773887546723061739ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)43952;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 3282298729140040975ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
