#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2803596908U;
signed char var_5 = (signed char)-21;
long long int var_7 = 4437609995961406164LL;
unsigned int var_11 = 1024424165U;
signed char var_13 = (signed char)-89;
long long int var_14 = -6059563247262782437LL;
int zero = 0;
unsigned short var_15 = (unsigned short)40141;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)245;
unsigned short var_18 = (unsigned short)19653;
unsigned short var_19 = (unsigned short)54042;
unsigned long long int arr_1 [14] ;
_Bool arr_5 [17] [17] ;
signed char arr_3 [14] [14] ;
unsigned char arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 9510980735731067146ULL : 15090837549278109633ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-112 : (signed char)-102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)13;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
