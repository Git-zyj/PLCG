#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6801511911331916600LL;
long long int var_3 = 4700450001987233119LL;
unsigned short var_4 = (unsigned short)31787;
signed char var_5 = (signed char)-93;
unsigned long long int var_6 = 16770591903070842914ULL;
long long int var_7 = 3625058333121599094LL;
long long int var_9 = -4015632353584038644LL;
unsigned long long int var_10 = 18347219026848123592ULL;
unsigned long long int var_11 = 4629668085597634210ULL;
signed char var_12 = (signed char)53;
unsigned short var_13 = (unsigned short)36012;
unsigned short var_14 = (unsigned short)19270;
long long int var_15 = 6773420743379397280LL;
unsigned long long int var_16 = 2222302825012777104ULL;
unsigned short var_17 = (unsigned short)16575;
unsigned short var_19 = (unsigned short)459;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8062674653569733261LL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)219;
short var_24 = (short)-11353;
_Bool var_25 = (_Bool)0;
int var_26 = 982383143;
_Bool var_27 = (_Bool)0;
short arr_4 [15] ;
unsigned int arr_5 [15] [15] [15] ;
short arr_8 [17] ;
unsigned short arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)21331;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3502844774U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)-9210;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned short)8505;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
