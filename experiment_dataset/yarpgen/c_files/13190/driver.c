#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4771069800593492563LL;
signed char var_3 = (signed char)-1;
unsigned char var_4 = (unsigned char)67;
signed char var_5 = (signed char)79;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)75;
unsigned int var_9 = 2632207044U;
unsigned long long int var_10 = 7262544697051559696ULL;
signed char var_12 = (signed char)-37;
unsigned short var_13 = (unsigned short)40185;
int var_14 = -1816378521;
unsigned int var_15 = 1467453868U;
signed char var_16 = (signed char)127;
unsigned char var_17 = (unsigned char)184;
int zero = 0;
long long int var_18 = -6772405623455152425LL;
unsigned long long int var_19 = 16724113405473531231ULL;
unsigned char var_20 = (unsigned char)241;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-53;
signed char var_23 = (signed char)120;
unsigned char var_24 = (unsigned char)49;
unsigned long long int var_25 = 11301560171502574177ULL;
unsigned int var_26 = 1278746466U;
unsigned int var_27 = 3469451360U;
unsigned int arr_2 [15] ;
signed char arr_3 [15] ;
short arr_11 [19] ;
unsigned long long int arr_12 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3121235775U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)-15911;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 16185236802388858606ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
