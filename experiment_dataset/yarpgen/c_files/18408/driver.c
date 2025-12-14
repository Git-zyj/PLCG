#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5103613843902454477ULL;
int var_2 = -1796595014;
long long int var_4 = -2493111710655226441LL;
long long int var_5 = -3366517912586510274LL;
long long int var_6 = 4743649986894822616LL;
long long int var_8 = -1554277916807884251LL;
unsigned int var_11 = 1396505474U;
unsigned long long int var_13 = 12668863347199781692ULL;
signed char var_14 = (signed char)18;
signed char var_15 = (signed char)-32;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)187;
int zero = 0;
unsigned char var_19 = (unsigned char)136;
short var_20 = (short)-22062;
int var_21 = 504769705;
unsigned int var_22 = 2919105543U;
long long int var_23 = -7928586629144531937LL;
int var_24 = 312607612;
int var_25 = -1946347602;
unsigned int var_26 = 2282865531U;
short arr_3 [19] [19] [19] ;
_Bool arr_4 [19] [19] [19] ;
unsigned int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)4929;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 3137114198U;
}

void checksum() {
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
