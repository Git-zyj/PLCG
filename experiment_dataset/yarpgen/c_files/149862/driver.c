#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8889305836143089887LL;
short var_5 = (short)-13394;
long long int var_8 = 196320228882653882LL;
unsigned char var_9 = (unsigned char)26;
long long int var_10 = -8577730404225728178LL;
unsigned char var_11 = (unsigned char)12;
int zero = 0;
unsigned short var_13 = (unsigned short)15872;
unsigned int var_14 = 4031648747U;
int var_15 = -1798631578;
int var_16 = -1790739154;
unsigned int var_17 = 324421620U;
int var_18 = -1163525742;
unsigned long long int arr_3 [10] [10] ;
short arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 5739341424022817929ULL : 7064556041894222066ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)27685 : (short)-12900;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
