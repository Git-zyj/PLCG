#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1785718982;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)16;
unsigned long long int var_3 = 1491673775321344133ULL;
signed char var_4 = (signed char)-28;
long long int var_5 = -1048033083358195710LL;
unsigned long long int var_6 = 8222807492137440412ULL;
unsigned short var_7 = (unsigned short)40852;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)9;
int zero = 0;
unsigned int var_10 = 760355749U;
short var_11 = (short)-12542;
signed char var_12 = (signed char)95;
unsigned int var_13 = 1118163113U;
unsigned int var_14 = 2760495324U;
unsigned int var_15 = 3888755577U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-51;
signed char var_18 = (signed char)-23;
int var_19 = 2138032455;
signed char arr_6 [14] ;
signed char arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (signed char)68;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
