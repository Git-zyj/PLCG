#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1679860116;
unsigned short var_3 = (unsigned short)51058;
int var_5 = 436460178;
long long int var_8 = 2037610689175811328LL;
long long int var_9 = 8422973327302405084LL;
long long int var_10 = -5906185129390143545LL;
long long int var_13 = -4877127513203507278LL;
unsigned short var_14 = (unsigned short)37981;
signed char var_15 = (signed char)99;
short var_17 = (short)-20877;
long long int var_18 = 3041235911933950200LL;
long long int var_19 = 196193523151716776LL;
int zero = 0;
long long int var_20 = 26728007759371266LL;
unsigned long long int var_21 = 16785315958719587267ULL;
unsigned short arr_0 [11] ;
unsigned short arr_1 [11] ;
short arr_2 [11] [11] ;
long long int arr_3 [11] [11] ;
short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)38199;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)37516;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20565 : (short)-24371;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 4583521586729296706LL : 6751569316408846655LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-4275 : (short)-27732;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
