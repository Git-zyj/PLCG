#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1569643587;
int var_2 = -714417839;
long long int var_3 = 5628980957835709708LL;
long long int var_4 = -3429509387239005810LL;
signed char var_5 = (signed char)-104;
int var_6 = 1653859053;
unsigned char var_8 = (unsigned char)116;
int zero = 0;
short var_12 = (short)3391;
long long int var_13 = -5536322717041814763LL;
unsigned short var_14 = (unsigned short)39461;
signed char var_15 = (signed char)79;
unsigned char var_16 = (unsigned char)62;
unsigned short var_17 = (unsigned short)57369;
unsigned long long int var_18 = 6788128828245724732ULL;
unsigned int var_19 = 4160593051U;
long long int var_20 = 5153823877319896813LL;
long long int var_21 = 950134565157941014LL;
unsigned char var_22 = (unsigned char)73;
unsigned short var_23 = (unsigned short)2557;
long long int var_24 = -5978345036126594175LL;
long long int var_25 = 249383189290734608LL;
int var_26 = -1173945604;
signed char var_27 = (signed char)115;
int var_28 = 544298002;
unsigned int var_29 = 1338961235U;
int var_30 = 1895007349;
unsigned long long int var_31 = 14628145005792701564ULL;
short var_32 = (short)29980;
unsigned short var_33 = (unsigned short)46475;
unsigned char var_34 = (unsigned char)164;
short var_35 = (short)1546;
unsigned int var_36 = 3862817213U;
int var_37 = -35317482;
unsigned long long int arr_0 [23] ;
int arr_1 [23] ;
short arr_2 [23] ;
long long int arr_3 [23] ;
long long int arr_4 [23] ;
short arr_5 [23] [23] ;
int arr_7 [23] [23] [23] ;
unsigned int arr_8 [23] ;
unsigned char arr_9 [23] [23] [23] ;
long long int arr_10 [23] [23] [23] ;
unsigned short arr_12 [23] [23] ;
long long int arr_13 [23] [23] [23] [23] ;
long long int arr_14 [23] [23] [23] [23] ;
unsigned short arr_18 [23] [23] [23] [23] ;
long long int arr_19 [23] [23] [23] [23] [23] [23] ;
long long int arr_21 [23] [23] [23] [23] ;
short arr_27 [24] ;
_Bool arr_28 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 624710325233818243ULL : 15891174810925592500ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1248023170;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-18877;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4136957731135625741LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -4345629276677008372LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)8430;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -2005486946;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 597634438U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1882921215017598170LL : -5719688775456415572LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)40946;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1768833906781402230LL : 73776188740400885LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -4431015812622475494LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31854;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -447984543463916757LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -3615346605397048400LL : -1436381505090583871LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (short)17366;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
