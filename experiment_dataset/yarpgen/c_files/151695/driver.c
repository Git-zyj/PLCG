#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)117;
unsigned long long int var_5 = 13301032759381045727ULL;
signed char var_6 = (signed char)85;
unsigned short var_7 = (unsigned short)50932;
unsigned char var_8 = (unsigned char)45;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)494;
unsigned long long int var_11 = 13559309582871522074ULL;
unsigned int var_14 = 744431490U;
int zero = 0;
unsigned char var_15 = (unsigned char)226;
long long int var_16 = -5240417151168817042LL;
unsigned int var_17 = 2472248562U;
long long int var_18 = 2532395033446285082LL;
unsigned int var_19 = 3491421743U;
int var_20 = 151498352;
signed char arr_0 [17] ;
_Bool arr_3 [17] [17] ;
unsigned long long int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-70 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 17765707853176713672ULL : 2519402995372541594ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
