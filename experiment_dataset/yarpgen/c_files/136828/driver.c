#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58765;
unsigned short var_2 = (unsigned short)38215;
short var_4 = (short)-16009;
unsigned short var_6 = (unsigned short)53965;
unsigned char var_7 = (unsigned char)100;
unsigned char var_12 = (unsigned char)180;
unsigned long long int var_13 = 9393935084434545149ULL;
unsigned long long int var_14 = 5827570807143774772ULL;
long long int var_15 = 3476789716782788713LL;
long long int var_16 = 2923211595127218446LL;
int zero = 0;
unsigned short var_18 = (unsigned short)14227;
unsigned short var_19 = (unsigned short)25177;
unsigned long long int var_20 = 1641388209820582827ULL;
short var_21 = (short)12825;
unsigned long long int var_22 = 108291432857666128ULL;
unsigned short var_23 = (unsigned short)53893;
long long int var_24 = 4896444941848328031LL;
int var_25 = -262679262;
long long int var_26 = 5330484068991364334LL;
unsigned char arr_3 [15] ;
int arr_8 [15] ;
unsigned char arr_18 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1537977781 : 277464639;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)133 : (unsigned char)20;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
