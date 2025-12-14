#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6718166756884243669ULL;
int var_3 = -612603901;
unsigned long long int var_4 = 2746162308408883521ULL;
unsigned int var_6 = 862559831U;
unsigned long long int var_7 = 3974990769175980060ULL;
unsigned short var_8 = (unsigned short)9717;
unsigned int var_9 = 3074219932U;
long long int var_10 = -8204749643825627782LL;
int zero = 0;
unsigned long long int var_11 = 13714799571899026947ULL;
short var_12 = (short)-6225;
unsigned long long int var_13 = 3355364327940229539ULL;
unsigned int var_14 = 177861245U;
short var_15 = (short)-19318;
long long int var_16 = 6438871465014152726LL;
signed char var_17 = (signed char)13;
unsigned long long int var_18 = 10311206160030220825ULL;
signed char var_19 = (signed char)75;
long long int var_20 = -7782113995640113891LL;
signed char var_21 = (signed char)-88;
_Bool var_22 = (_Bool)0;
long long int var_23 = 8186629476892272262LL;
unsigned int var_24 = 1985305813U;
long long int var_25 = -1198950858702092789LL;
short var_26 = (short)-23273;
unsigned long long int var_27 = 17813944846991921621ULL;
long long int var_28 = 3319724962283104169LL;
signed char arr_1 [14] ;
signed char arr_2 [14] ;
unsigned short arr_3 [14] [14] ;
unsigned long long int arr_4 [14] [14] [14] ;
unsigned short arr_5 [14] ;
unsigned short arr_6 [14] ;
unsigned short arr_9 [14] [14] ;
unsigned long long int arr_10 [14] [14] [14] ;
_Bool arr_11 [14] [14] [14] [14] [14] ;
_Bool arr_12 [14] [14] [14] [14] [14] ;
unsigned long long int arr_13 [14] ;
signed char arr_14 [14] ;
long long int arr_16 [14] [14] [14] [14] [14] ;
unsigned long long int arr_18 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)40016;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 13723507979394763846ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)22690;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)12902;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)63009;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 241026660116050260ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 2377270213923426915ULL : 15512391203333516107ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 6022883648530505851LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8644898455685203657ULL : 17646672105278192763ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
