#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4611631637536791673LL;
long long int var_1 = -5791635980749899957LL;
long long int var_2 = -7447481916129614882LL;
long long int var_3 = -3005574423373674353LL;
unsigned short var_6 = (unsigned short)56481;
unsigned short var_7 = (unsigned short)64379;
unsigned short var_9 = (unsigned short)6669;
long long int var_11 = -5301794552992232533LL;
unsigned short var_12 = (unsigned short)45041;
int zero = 0;
long long int var_13 = -1721055533740402111LL;
long long int var_14 = 6322297143722439590LL;
long long int var_15 = 3983486180938557445LL;
long long int var_16 = -5508459462195327LL;
long long int var_17 = 5103388248743746983LL;
long long int var_18 = -4001619215735761789LL;
unsigned short var_19 = (unsigned short)35772;
unsigned short var_20 = (unsigned short)4182;
unsigned short arr_6 [10] [10] [10] [10] ;
unsigned short arr_9 [10] [10] [10] [10] ;
unsigned short arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)28768;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)31454 : (unsigned short)33364;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)22391;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
