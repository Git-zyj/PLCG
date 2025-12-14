#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
int var_1 = -1700630800;
unsigned short var_3 = (unsigned short)23380;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_7 = 6082557849232895845LL;
int var_8 = -1979036381;
signed char var_9 = (signed char)32;
short var_10 = (short)-13569;
unsigned int var_11 = 4205933656U;
int var_12 = 334337608;
signed char var_14 = (signed char)-107;
unsigned char var_15 = (unsigned char)40;
int zero = 0;
long long int var_16 = 3392511066690494158LL;
int var_17 = -1515837811;
long long int var_18 = -1062242577293183133LL;
long long int var_19 = 45633019624849024LL;
int var_20 = 580278701;
long long int var_21 = 575401850637528385LL;
unsigned short var_22 = (unsigned short)46238;
long long int var_23 = 8585143490021696134LL;
long long int var_24 = -7964957153279878490LL;
unsigned int var_25 = 2263841479U;
short var_26 = (short)1744;
unsigned short var_27 = (unsigned short)52683;
signed char var_28 = (signed char)-68;
long long int var_29 = -3761794368935372747LL;
short arr_3 [18] [18] ;
signed char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)21839;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)123;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
