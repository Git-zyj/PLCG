#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-84;
unsigned short var_3 = (unsigned short)23448;
signed char var_4 = (signed char)-114;
signed char var_5 = (signed char)111;
unsigned short var_6 = (unsigned short)53391;
short var_7 = (short)-29350;
unsigned int var_8 = 3901875460U;
unsigned short var_9 = (unsigned short)57807;
short var_14 = (short)-25815;
signed char var_15 = (signed char)83;
int zero = 0;
signed char var_17 = (signed char)111;
signed char var_18 = (signed char)5;
unsigned int var_19 = 1105528711U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-12;
short var_22 = (short)-26603;
short var_23 = (short)-1979;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
_Bool arr_2 [24] [24] ;
unsigned short arr_3 [24] ;
short arr_4 [24] [24] ;
short arr_7 [24] ;
_Bool arr_9 [24] [24] [24] [24] [24] ;
unsigned short arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3286 : (unsigned short)49928;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)25904 : (short)-7170;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)-9762;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)51053 : (unsigned short)4168;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
