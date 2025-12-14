#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 381101995729179248ULL;
long long int var_2 = -3782481399786326095LL;
unsigned int var_3 = 3289220442U;
signed char var_4 = (signed char)-3;
unsigned short var_5 = (unsigned short)33913;
signed char var_6 = (signed char)-31;
unsigned long long int var_8 = 5739323964800533777ULL;
signed char var_9 = (signed char)-49;
int zero = 0;
long long int var_10 = -2558833293590063255LL;
unsigned short var_11 = (unsigned short)15945;
short var_12 = (short)-12521;
unsigned char var_13 = (unsigned char)168;
unsigned short var_14 = (unsigned short)48093;
signed char var_15 = (signed char)20;
signed char var_16 = (signed char)-103;
long long int var_17 = -8609405142088395398LL;
short var_18 = (short)-5211;
unsigned short var_19 = (unsigned short)40165;
_Bool var_20 = (_Bool)1;
int var_21 = 560786028;
signed char var_22 = (signed char)-52;
int var_23 = -509292803;
unsigned long long int var_24 = 543574451229052950ULL;
long long int var_25 = -3151665461801438662LL;
long long int var_26 = 5049642075797583950LL;
unsigned long long int var_27 = 7454273046552484298ULL;
unsigned char arr_2 [12] ;
int arr_3 [12] ;
int arr_7 [12] [12] ;
_Bool arr_10 [12] [12] ;
unsigned int arr_15 [23] ;
unsigned int arr_17 [23] ;
unsigned short arr_20 [23] ;
long long int arr_22 [23] ;
long long int arr_13 [12] [12] [12] [12] ;
short arr_14 [12] ;
short arr_19 [23] ;
unsigned long long int arr_25 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1210555440;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1557839426 : -758591517;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3322300707U : 2729812260U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1675964638U : 2417575039U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (unsigned short)26377;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 7149357421444952838LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -606256700507232975LL : 8662832107887438620LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (short)-32193;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)-29546 : (short)-28405;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 16459365522707237115ULL : 8135809609858086601ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
