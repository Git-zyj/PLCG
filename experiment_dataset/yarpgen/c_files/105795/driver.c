#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2130724180;
signed char var_3 = (signed char)-26;
signed char var_5 = (signed char)36;
int var_9 = -272930278;
unsigned int var_10 = 4072331324U;
long long int var_12 = -4156528071474205838LL;
long long int var_13 = -377318766002735293LL;
long long int var_15 = 571799613281746462LL;
long long int var_18 = -3368329774648808196LL;
int zero = 0;
short var_19 = (short)-8576;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-3024;
signed char arr_1 [21] [21] ;
long long int arr_4 [21] ;
long long int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 4312978230840837651LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6987938272462239003LL : -7606814012402325119LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
