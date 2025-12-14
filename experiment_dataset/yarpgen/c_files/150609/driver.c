#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64434;
unsigned short var_2 = (unsigned short)24099;
unsigned short var_4 = (unsigned short)39649;
int var_6 = 1089360071;
signed char var_9 = (signed char)-98;
unsigned int var_12 = 4266792733U;
int var_14 = -1290806399;
long long int var_15 = 3197025987788874567LL;
unsigned int var_16 = 2747430618U;
int zero = 0;
short var_19 = (short)29648;
short var_20 = (short)-9111;
unsigned short var_21 = (unsigned short)12006;
unsigned char var_22 = (unsigned char)100;
unsigned short var_23 = (unsigned short)10626;
unsigned short var_24 = (unsigned short)56705;
long long int var_25 = 7987559400392414496LL;
long long int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
int arr_2 [12] [12] ;
long long int arr_5 [12] [12] ;
long long int arr_7 [12] ;
unsigned long long int arr_3 [12] ;
short arr_8 [12] [12] ;
long long int arr_9 [12] [12] ;
unsigned short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 8320984744112415000LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3622736649119927513ULL : 519442319821893240ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1440751732 : 904875004;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 3929255945833060292LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 3820077346472213394LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3991971317312033276ULL : 4070129735271345947ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-26732;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 4316015249022649465LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned short)20372;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
