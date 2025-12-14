#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20200;
long long int var_1 = 23333604042019410LL;
int var_2 = -1452353432;
long long int var_3 = 2420858240638454839LL;
int var_4 = -1428042475;
unsigned int var_5 = 3406880856U;
int var_6 = -2079908741;
unsigned char var_7 = (unsigned char)95;
long long int var_8 = -2317137447407598180LL;
short var_9 = (short)-9823;
short var_10 = (short)-11269;
unsigned int var_11 = 532311531U;
short var_12 = (short)-12701;
unsigned int var_13 = 3727683403U;
short var_14 = (short)19310;
unsigned long long int var_15 = 6415538391968549957ULL;
int var_16 = 68023311;
long long int var_17 = 3533089737750129448LL;
unsigned char var_18 = (unsigned char)36;
unsigned int var_19 = 1951231642U;
int zero = 0;
unsigned int var_20 = 730180205U;
unsigned short var_21 = (unsigned short)32713;
unsigned char var_22 = (unsigned char)90;
unsigned char var_23 = (unsigned char)122;
short var_24 = (short)27986;
unsigned char var_25 = (unsigned char)81;
_Bool var_26 = (_Bool)1;
short var_27 = (short)25474;
unsigned char var_28 = (unsigned char)51;
unsigned long long int var_29 = 791669880057516171ULL;
short var_30 = (short)-7784;
unsigned char arr_3 [24] ;
long long int arr_20 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)133 : (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 3973007735625040529LL : 4919074532173862730LL;
}

void checksum() {
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
