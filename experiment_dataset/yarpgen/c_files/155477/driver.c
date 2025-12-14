#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)885;
unsigned short var_2 = (unsigned short)57767;
signed char var_4 = (signed char)-77;
unsigned short var_5 = (unsigned short)38446;
unsigned short var_6 = (unsigned short)32978;
unsigned short var_7 = (unsigned short)15073;
unsigned short var_8 = (unsigned short)36984;
short var_9 = (short)-30587;
unsigned short var_11 = (unsigned short)12071;
int zero = 0;
unsigned long long int var_12 = 15878261596378803715ULL;
unsigned short var_13 = (unsigned short)10277;
signed char var_14 = (signed char)76;
unsigned long long int var_15 = 11999994668137561486ULL;
long long int var_16 = -6698545777593554696LL;
unsigned char var_17 = (unsigned char)0;
unsigned short var_18 = (unsigned short)42791;
unsigned long long int var_19 = 6997535025733697427ULL;
unsigned short var_20 = (unsigned short)6297;
unsigned char var_21 = (unsigned char)82;
long long int var_22 = 2980621946310251997LL;
unsigned int arr_1 [19] ;
short arr_6 [19] [19] [19] ;
unsigned short arr_7 [19] [19] [19] [19] [19] [19] ;
long long int arr_8 [19] [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3931998205U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)737;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)31770;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5683602370165903131LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
