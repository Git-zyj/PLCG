#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -1687960813656830063LL;
unsigned char var_3 = (unsigned char)37;
short var_4 = (short)27780;
int var_5 = -2028667426;
short var_6 = (short)17017;
short var_7 = (short)-19950;
int var_9 = 810368508;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 16917824959738359299ULL;
int var_13 = 1655404808;
unsigned char var_14 = (unsigned char)166;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)186;
int var_17 = 630722869;
int zero = 0;
unsigned short var_18 = (unsigned short)39888;
unsigned char var_19 = (unsigned char)150;
unsigned short var_20 = (unsigned short)25754;
signed char var_21 = (signed char)-123;
_Bool var_22 = (_Bool)1;
unsigned short arr_5 [20] [20] [20] ;
short arr_9 [20] [20] [20] [20] ;
signed char arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)38135;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)13939;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-23 : (signed char)109;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
