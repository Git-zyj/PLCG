#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6713516738904091164ULL;
unsigned long long int var_3 = 16685397354911536989ULL;
unsigned short var_5 = (unsigned short)65299;
unsigned long long int var_7 = 18320096035354913357ULL;
short var_8 = (short)27932;
unsigned char var_9 = (unsigned char)156;
signed char var_10 = (signed char)53;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)19068;
signed char var_16 = (signed char)-116;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4022365889U;
long long int var_20 = -7596492538816394249LL;
short var_21 = (short)12924;
unsigned long long int var_22 = 7920305391082538254ULL;
unsigned int var_23 = 3895675870U;
unsigned short var_24 = (unsigned short)8316;
signed char var_25 = (signed char)-28;
unsigned short var_26 = (unsigned short)25600;
unsigned short arr_6 [19] ;
_Bool arr_7 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11660 : (unsigned short)61152;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
