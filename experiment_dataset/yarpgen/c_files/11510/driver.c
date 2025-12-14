#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4204859090280090775ULL;
short var_4 = (short)-20519;
unsigned int var_9 = 3748682080U;
int var_11 = 495105981;
int var_14 = -575847240;
unsigned short var_17 = (unsigned short)46241;
int zero = 0;
long long int var_18 = -2441622346728984489LL;
unsigned short var_19 = (unsigned short)53404;
unsigned char var_20 = (unsigned char)147;
unsigned short var_21 = (unsigned short)8675;
unsigned long long int var_22 = 13103702122057736988ULL;
long long int arr_0 [12] ;
unsigned char arr_1 [12] ;
signed char arr_3 [17] ;
long long int arr_4 [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned long long int arr_6 [17] ;
short arr_2 [12] ;
int arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 5966261468015720504LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-23 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 588354432636288477LL : -216292910222606906LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 10188522881369326999ULL : 17457701552906396008ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 18405871981581023862ULL : 8874597805100296622ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)10570;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1198733509 : 2111063813;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
