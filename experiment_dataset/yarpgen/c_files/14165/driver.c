#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3925343140984661424ULL;
long long int var_1 = 1138943940714613610LL;
short var_2 = (short)10081;
signed char var_3 = (signed char)-112;
signed char var_4 = (signed char)41;
unsigned char var_5 = (unsigned char)47;
long long int var_6 = 1190103363805836955LL;
unsigned char var_7 = (unsigned char)170;
signed char var_8 = (signed char)84;
signed char var_9 = (signed char)125;
unsigned short var_10 = (unsigned short)49023;
short var_11 = (short)3486;
unsigned short var_12 = (unsigned short)2856;
signed char var_14 = (signed char)-28;
long long int var_15 = -3422080221208466031LL;
int zero = 0;
signed char var_16 = (signed char)-4;
unsigned long long int var_17 = 14714943460300291208ULL;
int var_18 = -1579837370;
long long int var_19 = 5418835071568689666LL;
unsigned long long int var_20 = 7089158514865792554ULL;
int var_21 = -1734877989;
unsigned int var_22 = 2405707646U;
unsigned char var_23 = (unsigned char)48;
unsigned long long int var_24 = 13083488086249912224ULL;
unsigned long long int var_25 = 15847950587672332388ULL;
signed char var_26 = (signed char)-83;
unsigned int var_27 = 1881436600U;
unsigned short arr_2 [25] ;
unsigned short arr_12 [25] [25] [25] ;
short arr_20 [25] [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12373 : (unsigned short)37702;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)11757 : (unsigned short)45781;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (short)-11450 : (short)6922;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
