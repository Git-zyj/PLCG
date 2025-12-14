#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1767937297;
long long int var_1 = 1629123379903494345LL;
unsigned long long int var_4 = 14891211431670265469ULL;
unsigned short var_5 = (unsigned short)17463;
short var_6 = (short)10504;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-123;
signed char var_10 = (signed char)-16;
signed char var_11 = (signed char)35;
short var_12 = (short)-26155;
int zero = 0;
signed char var_13 = (signed char)45;
unsigned char var_14 = (unsigned char)191;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-13880;
int var_17 = 537086539;
long long int var_18 = 5636088024921279481LL;
int arr_10 [20] ;
unsigned char arr_8 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 899018671;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)141 : (unsigned char)212;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
