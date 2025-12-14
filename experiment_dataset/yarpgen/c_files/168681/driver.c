#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18359174771113381714ULL;
signed char var_1 = (signed char)44;
long long int var_2 = -2676673510772228423LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)24;
unsigned char var_5 = (unsigned char)26;
unsigned char var_6 = (unsigned char)103;
long long int var_7 = 1323166499031961909LL;
long long int var_8 = -7164608833237500881LL;
long long int var_9 = 1124487973642282315LL;
signed char var_11 = (signed char)72;
unsigned char var_12 = (unsigned char)145;
int zero = 0;
signed char var_13 = (signed char)58;
int var_14 = 1080928947;
signed char var_15 = (signed char)102;
unsigned int var_16 = 286638727U;
int var_17 = 1692581458;
unsigned int var_18 = 2581183458U;
long long int var_19 = 8713941264462711905LL;
short var_20 = (short)8805;
signed char var_21 = (signed char)39;
unsigned char var_22 = (unsigned char)133;
unsigned char var_23 = (unsigned char)105;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)153;
long long int var_26 = -2110725637227696740LL;
signed char var_27 = (signed char)7;
_Bool var_28 = (_Bool)1;
_Bool arr_7 [24] ;
signed char arr_10 [24] [24] [24] ;
unsigned long long int arr_19 [24] [24] [24] [24] [24] ;
_Bool arr_20 [24] ;
long long int arr_34 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)65 : (signed char)80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1077739404142104241ULL : 12254997042183287661ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = -8761959533252832652LL;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
