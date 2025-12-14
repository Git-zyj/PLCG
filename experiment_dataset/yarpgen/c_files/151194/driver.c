#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9560513642499867785ULL;
unsigned char var_1 = (unsigned char)134;
unsigned short var_2 = (unsigned short)57044;
signed char var_4 = (signed char)-24;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)41922;
long long int var_7 = -4654238419872666531LL;
unsigned long long int var_9 = 18310407647304100776ULL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 6763178748851693921ULL;
int var_14 = 293283699;
long long int var_16 = 6604651564026509946LL;
unsigned int var_17 = 404835032U;
short var_18 = (short)-21585;
int zero = 0;
unsigned char var_19 = (unsigned char)213;
long long int var_20 = -2850657579635322271LL;
unsigned long long int var_21 = 13310096006823085306ULL;
unsigned long long int var_22 = 17387482499817158506ULL;
unsigned short var_23 = (unsigned short)46688;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
long long int var_26 = 5260543498859190458LL;
unsigned short var_27 = (unsigned short)37179;
unsigned int var_28 = 263524415U;
_Bool var_29 = (_Bool)1;
long long int var_30 = -3301942049273874616LL;
long long int arr_8 [20] ;
short arr_17 [20] [20] ;
int arr_23 [20] [20] [20] ;
int arr_24 [20] ;
unsigned long long int arr_38 [23] [23] [23] [23] [23] ;
short arr_39 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1744538492413945902LL : -8778388659317041850LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-13803 : (short)-1903;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -856711080 : -2142561629;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? -2022292982 : -620901148;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 5073696101492799391ULL : 10011027723759769548ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (short)4075 : (short)-29570;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
