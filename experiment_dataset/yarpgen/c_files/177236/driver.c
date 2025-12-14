#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30761;
signed char var_2 = (signed char)111;
unsigned short var_3 = (unsigned short)36574;
signed char var_4 = (signed char)1;
short var_5 = (short)-20191;
long long int var_6 = -8910195786588357414LL;
long long int var_7 = -2119715946230085759LL;
unsigned long long int var_8 = 10728178853541849603ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-16353;
signed char var_11 = (signed char)30;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)27219;
int zero = 0;
unsigned short var_15 = (unsigned short)1727;
unsigned long long int var_16 = 1681109714046096716ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -2038190658317323443LL;
long long int var_19 = 4229082359252678423LL;
unsigned short var_20 = (unsigned short)38126;
_Bool var_21 = (_Bool)0;
short var_22 = (short)4038;
unsigned short var_23 = (unsigned short)28319;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)85;
signed char var_26 = (signed char)-90;
unsigned short var_27 = (unsigned short)12572;
long long int var_28 = -6414502724521751486LL;
_Bool var_29 = (_Bool)0;
short var_30 = (short)4403;
long long int var_31 = -2184785875857859366LL;
short arr_0 [24] ;
int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
unsigned int arr_4 [24] [24] ;
int arr_5 [24] [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] [24] ;
signed char arr_10 [14] ;
unsigned long long int arr_15 [18] ;
unsigned char arr_19 [18] [18] [18] ;
signed char arr_20 [18] [18] ;
long long int arr_21 [18] [18] ;
unsigned long long int arr_12 [14] [14] ;
long long int arr_17 [18] ;
unsigned char arr_29 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_30 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)9848;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 492907783;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 5792524603770255876ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 3582292484U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1632933810;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 13227828662931609138ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 4944131138519115294ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = 317113736432320730LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 5386879914723857687ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = 142904756056915011LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned short)20044;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
