#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 67776070570243681LL;
short var_7 = (short)-17422;
unsigned int var_8 = 1999645472U;
short var_9 = (short)-17099;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -6090454679661166628LL;
long long int var_13 = -4634519321287105202LL;
long long int var_14 = -4091980535052348960LL;
unsigned int var_15 = 2950007812U;
long long int var_16 = -7801274468474714323LL;
long long int var_17 = 4645183017658229053LL;
int var_18 = -977533914;
short var_19 = (short)-11401;
unsigned int var_20 = 19774501U;
long long int var_21 = -4717142549739894527LL;
short var_22 = (short)16999;
long long int var_23 = 1275932817897435229LL;
short var_24 = (short)-6306;
int var_25 = -288219551;
long long int var_26 = 3602030916677827388LL;
short arr_0 [14] [14] ;
long long int arr_1 [14] [14] ;
unsigned int arr_7 [14] ;
signed char arr_8 [14] [14] [14] [14] ;
unsigned int arr_16 [15] ;
unsigned long long int arr_24 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31299;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -834084907863691716LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 3751729964U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 1889946108U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 15894030097995562873ULL : 5980829202148652470ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
