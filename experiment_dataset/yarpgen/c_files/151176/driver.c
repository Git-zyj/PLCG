#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12124268217707799577ULL;
unsigned long long int var_2 = 8870820404925093690ULL;
signed char var_4 = (signed char)-83;
signed char var_5 = (signed char)-77;
unsigned long long int var_7 = 3149972867969933552ULL;
unsigned long long int var_12 = 9537739072967820897ULL;
short var_13 = (short)-11044;
unsigned char var_15 = (unsigned char)125;
unsigned long long int var_17 = 11946817693395464289ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)16228;
unsigned char var_19 = (unsigned char)189;
unsigned short var_20 = (unsigned short)31209;
long long int var_21 = 7094609035494564003LL;
unsigned long long int var_22 = 2807666252591124377ULL;
long long int var_23 = 4988835930681744427LL;
int var_24 = -362127409;
short arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
unsigned char arr_3 [17] [17] ;
signed char arr_6 [17] ;
signed char arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-14566;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 13661390088283084791ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (signed char)19;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
