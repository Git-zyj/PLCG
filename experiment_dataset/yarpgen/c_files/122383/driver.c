#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1453825295;
long long int var_2 = -7365811405642964328LL;
short var_3 = (short)8645;
int var_4 = -1053914030;
unsigned int var_5 = 349156927U;
unsigned char var_6 = (unsigned char)142;
unsigned char var_8 = (unsigned char)244;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)75;
int var_12 = -1363596539;
signed char var_13 = (signed char)-82;
int zero = 0;
unsigned short var_15 = (unsigned short)25775;
unsigned long long int var_16 = 3959718183006496239ULL;
unsigned int var_17 = 2773359895U;
short var_18 = (short)-11638;
short var_19 = (short)1899;
unsigned short var_20 = (unsigned short)32663;
unsigned short var_21 = (unsigned short)42570;
int var_22 = -1503352579;
unsigned short var_23 = (unsigned short)22838;
unsigned short var_24 = (unsigned short)14384;
long long int arr_2 [14] ;
short arr_3 [14] ;
signed char arr_4 [14] [14] [14] ;
signed char arr_7 [14] [14] [14] ;
_Bool arr_8 [14] [14] [14] [14] ;
unsigned int arr_10 [14] [14] ;
unsigned long long int arr_12 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -3984776031364533233LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)18163;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)35 : (signed char)108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 3381618466U : 1751005256U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 8950096230425680843ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
