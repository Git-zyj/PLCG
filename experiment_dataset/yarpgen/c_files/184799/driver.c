#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1243992469419343911ULL;
signed char var_1 = (signed char)121;
unsigned int var_2 = 1726322721U;
unsigned long long int var_5 = 14086273771960704188ULL;
short var_6 = (short)30314;
signed char var_7 = (signed char)19;
short var_8 = (short)10554;
unsigned long long int var_10 = 3620605695536914494ULL;
int zero = 0;
signed char var_11 = (signed char)-43;
short var_12 = (short)10988;
int var_13 = -1243653377;
unsigned long long int var_14 = 9199206029350455295ULL;
unsigned char var_15 = (unsigned char)14;
unsigned long long int var_16 = 2660019512946940189ULL;
unsigned short var_17 = (unsigned short)41382;
int var_18 = -1881908900;
unsigned char arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 8902215196078858224ULL : 1388539832687526356ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
