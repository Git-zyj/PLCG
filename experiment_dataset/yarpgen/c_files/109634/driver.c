#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7599520345419391730LL;
unsigned short var_1 = (unsigned short)45751;
long long int var_2 = -587485245697313962LL;
unsigned short var_3 = (unsigned short)45704;
unsigned int var_4 = 2521830537U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2913961247U;
unsigned long long int var_8 = 17413093597276678337ULL;
signed char var_9 = (signed char)-10;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 1625285524198944074ULL;
short var_12 = (short)-8574;
unsigned short var_13 = (unsigned short)54126;
long long int var_14 = 3929483540959475269LL;
int var_15 = 1270039749;
signed char arr_2 [11] ;
unsigned long long int arr_8 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 16471744533962384920ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
