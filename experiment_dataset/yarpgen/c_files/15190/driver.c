#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6382;
unsigned long long int var_3 = 15134266631394032590ULL;
int var_7 = 430480917;
unsigned int var_11 = 169388794U;
long long int var_12 = 1645847592103634318LL;
unsigned int var_13 = 3450008182U;
unsigned int var_15 = 556061377U;
int var_16 = -1025406265;
int zero = 0;
unsigned long long int var_17 = 2100107970137767619ULL;
long long int var_18 = 5811788178175725231LL;
unsigned int var_19 = 3017856305U;
unsigned char var_20 = (unsigned char)196;
unsigned short var_21 = (unsigned short)9982;
long long int var_22 = 2886306325126263426LL;
long long int var_23 = -7980750904617631478LL;
int var_24 = 1037575711;
unsigned int var_25 = 1534373611U;
_Bool var_26 = (_Bool)1;
unsigned short arr_0 [25] ;
unsigned char arr_8 [25] [25] [25] [25] ;
long long int arr_13 [25] [25] [25] [25] [25] ;
unsigned int arr_17 [25] [25] [25] [25] [25] ;
unsigned short arr_2 [25] ;
_Bool arr_18 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)29122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3521768481622133615LL : 8486206572930990271LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1115890187U : 2500583824U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)60483;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
