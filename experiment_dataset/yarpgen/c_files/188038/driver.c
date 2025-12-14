#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14635;
unsigned int var_1 = 2858949407U;
short var_2 = (short)-10395;
unsigned long long int var_4 = 15311139205668908318ULL;
short var_5 = (short)18144;
unsigned char var_6 = (unsigned char)183;
unsigned int var_10 = 458717784U;
signed char var_11 = (signed char)-33;
unsigned int var_14 = 3581289668U;
unsigned long long int var_15 = 13195398140347609427ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7824077444038549007LL;
int zero = 0;
short var_19 = (short)645;
long long int var_20 = -4205847843149663557LL;
signed char var_21 = (signed char)36;
unsigned long long int var_22 = 9043734153558070005ULL;
long long int var_23 = -3432437740158855334LL;
int var_24 = -723637087;
unsigned int var_25 = 2748768523U;
short var_26 = (short)-4847;
unsigned long long int var_27 = 10059907595763052546ULL;
unsigned char var_28 = (unsigned char)251;
int arr_11 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1590754326 : 301227432;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
