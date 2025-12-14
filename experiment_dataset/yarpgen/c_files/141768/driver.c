#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8298789342847605569LL;
unsigned short var_1 = (unsigned short)50909;
unsigned long long int var_2 = 15823289807223642618ULL;
signed char var_4 = (signed char)-61;
unsigned char var_5 = (unsigned char)205;
signed char var_6 = (signed char)106;
unsigned char var_7 = (unsigned char)60;
_Bool var_8 = (_Bool)1;
long long int var_9 = 156580371500051192LL;
signed char var_10 = (signed char)101;
long long int var_11 = -2663079654605534112LL;
unsigned short var_12 = (unsigned short)39521;
short var_13 = (short)-6435;
long long int var_14 = 1913735290969445526LL;
int zero = 0;
unsigned int var_15 = 1462768391U;
long long int var_16 = -2157623658984930382LL;
unsigned short var_17 = (unsigned short)25200;
signed char var_18 = (signed char)-37;
unsigned char var_19 = (unsigned char)235;
short var_20 = (short)-2403;
long long int var_21 = 1975335255751726412LL;
unsigned int var_22 = 4161743332U;
unsigned long long int var_23 = 17888785376564914475ULL;
long long int var_24 = 1554732388762445118LL;
unsigned int var_25 = 876843898U;
short var_26 = (short)-28234;
unsigned int var_27 = 3547216586U;
short arr_15 [18] ;
long long int arr_30 [21] [21] [21] [21] [21] [21] ;
signed char arr_33 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (short)-28746;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -6693540634378758270LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = (signed char)104;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
