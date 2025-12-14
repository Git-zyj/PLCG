#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
signed char var_1 = (signed char)-39;
unsigned long long int var_2 = 10051738478718060424ULL;
unsigned int var_6 = 3055678864U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 2170329273330914702ULL;
short var_9 = (short)-26096;
unsigned short var_15 = (unsigned short)4376;
long long int var_16 = 4559045051923222314LL;
int zero = 0;
long long int var_17 = 9000496438876962255LL;
long long int var_18 = -1530794652166742629LL;
short var_19 = (short)20187;
unsigned int var_20 = 1861544181U;
unsigned long long int var_21 = 606962053114127847ULL;
unsigned short var_22 = (unsigned short)56035;
_Bool arr_1 [22] ;
unsigned long long int arr_3 [22] ;
short arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 17747487366028194625ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)31586 : (short)-86;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
