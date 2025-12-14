#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)25;
short var_6 = (short)-29091;
signed char var_10 = (signed char)12;
unsigned long long int var_11 = 1483357500644202075ULL;
unsigned long long int var_12 = 15834301996938823111ULL;
unsigned short var_15 = (unsigned short)25283;
int zero = 0;
unsigned int var_16 = 3374003660U;
unsigned char var_17 = (unsigned char)132;
short var_18 = (short)-9507;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-23958;
long long int var_21 = -9003265053259317977LL;
long long int var_22 = 8113700938874441533LL;
signed char var_23 = (signed char)-77;
signed char var_24 = (signed char)52;
signed char arr_6 [14] [14] ;
signed char arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)18 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-55 : (signed char)106;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
