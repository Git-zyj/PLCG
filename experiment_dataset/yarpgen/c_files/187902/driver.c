#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 34453441834661225ULL;
unsigned long long int var_1 = 10488163143224350393ULL;
unsigned int var_3 = 197838872U;
signed char var_4 = (signed char)-36;
int var_5 = -416476424;
unsigned int var_6 = 3453829211U;
unsigned char var_7 = (unsigned char)1;
long long int var_8 = 6670007449180950709LL;
short var_9 = (short)-18491;
_Bool var_10 = (_Bool)0;
short var_11 = (short)31236;
short var_12 = (short)1858;
int zero = 0;
int var_13 = 1898753272;
short var_14 = (short)-16163;
unsigned short var_15 = (unsigned short)55764;
unsigned char var_16 = (unsigned char)247;
signed char var_17 = (signed char)50;
short var_18 = (short)-19573;
unsigned short var_19 = (unsigned short)22262;
long long int var_20 = -1138189571711564984LL;
unsigned long long int var_21 = 7338669135957024408ULL;
unsigned int arr_0 [19] [19] ;
signed char arr_1 [19] ;
long long int arr_2 [19] [19] [19] ;
unsigned int arr_5 [19] [19] [19] [19] ;
int arr_7 [19] [19] [19] [19] ;
signed char arr_10 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1020429244U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1491259427224864748LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1534851287U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -1629256320;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)122 : (signed char)-17;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
