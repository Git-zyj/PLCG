#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7975685581307611223LL;
unsigned int var_1 = 2102332909U;
unsigned short var_2 = (unsigned short)43481;
int var_3 = 854509722;
unsigned int var_4 = 4268119692U;
long long int var_5 = 3929894354706311561LL;
signed char var_7 = (signed char)-57;
long long int var_11 = -3209624065633018692LL;
int zero = 0;
int var_12 = -1935311904;
short var_13 = (short)322;
unsigned long long int var_14 = 9330562789957887025ULL;
long long int var_15 = -2885150185601662089LL;
unsigned char var_16 = (unsigned char)113;
long long int var_17 = -8613972183762779298LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3140553888946237563LL;
short arr_0 [19] [19] ;
long long int arr_1 [19] [19] ;
unsigned char arr_5 [19] [19] [19] ;
short arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-15301;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -6715186840537054483LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (short)18261;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
