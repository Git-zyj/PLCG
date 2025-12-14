#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1552121654;
unsigned long long int var_1 = 1554046350095228236ULL;
signed char var_2 = (signed char)106;
int var_3 = 125846586;
short var_4 = (short)31598;
unsigned int var_5 = 4176510228U;
unsigned long long int var_6 = 14064899426198610438ULL;
unsigned short var_7 = (unsigned short)50859;
unsigned int var_8 = 479275263U;
int var_9 = -554699091;
int zero = 0;
unsigned int var_10 = 3127728592U;
int var_11 = 1107517643;
int var_12 = 1929058113;
unsigned int var_13 = 2985721672U;
unsigned int var_14 = 4192698994U;
int var_15 = -383151448;
unsigned short var_16 = (unsigned short)20884;
unsigned long long int var_17 = 9866778558148108795ULL;
_Bool var_18 = (_Bool)1;
int var_19 = -325482063;
signed char var_20 = (signed char)123;
int var_21 = -10425513;
unsigned char var_22 = (unsigned char)146;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-11611;
short var_25 = (short)-311;
short var_26 = (short)-3725;
int arr_4 [24] [24] ;
short arr_21 [14] [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 696373660;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)3687;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
