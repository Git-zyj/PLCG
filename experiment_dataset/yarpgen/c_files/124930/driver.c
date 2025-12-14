#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
signed char var_2 = (signed char)-82;
short var_3 = (short)-7427;
long long int var_4 = -3695962672248012783LL;
_Bool var_7 = (_Bool)1;
long long int var_9 = -4086364322408724798LL;
long long int var_10 = 7676334111880513253LL;
signed char var_12 = (signed char)-115;
unsigned char var_13 = (unsigned char)10;
int var_14 = 1171367331;
int zero = 0;
unsigned int var_15 = 3752488158U;
short var_16 = (short)-10152;
short var_17 = (short)20135;
long long int var_18 = -5435391708962402119LL;
short var_19 = (short)20087;
unsigned char var_20 = (unsigned char)16;
short var_21 = (short)5678;
signed char var_22 = (signed char)5;
short var_23 = (short)9029;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 12352771938656454316ULL;
short var_27 = (short)-26932;
unsigned long long int var_28 = 17487129660417309833ULL;
unsigned char var_29 = (unsigned char)20;
short var_30 = (short)-15266;
unsigned int var_31 = 1961131408U;
unsigned short arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned char arr_2 [23] [23] [23] ;
unsigned int arr_3 [23] [23] ;
signed char arr_6 [23] [23] ;
short arr_10 [23] [23] ;
short arr_7 [23] [23] [23] ;
unsigned long long int arr_15 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)39020;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1700369610U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3833681361U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-6719;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)19090;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 18013496878265711574ULL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
