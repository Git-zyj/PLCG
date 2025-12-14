#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)56;
int var_3 = 1026805106;
unsigned int var_4 = 1289915227U;
int var_5 = 1393289640;
short var_6 = (short)-20845;
long long int var_7 = -8828420907611526473LL;
signed char var_8 = (signed char)-6;
long long int var_9 = 9017851833680214862LL;
signed char var_10 = (signed char)-103;
unsigned int var_11 = 2274757577U;
int var_12 = 323587472;
int zero = 0;
unsigned long long int var_13 = 3929173249176083618ULL;
short var_14 = (short)-4618;
unsigned long long int var_15 = 11797039956143421083ULL;
unsigned long long int var_16 = 2626530953869788674ULL;
signed char var_17 = (signed char)-74;
signed char var_18 = (signed char)-16;
unsigned char var_19 = (unsigned char)152;
unsigned int var_20 = 2338297363U;
signed char var_21 = (signed char)-87;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 3923431753962430132ULL;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
unsigned short arr_5 [18] [18] [18] ;
long long int arr_6 [18] ;
unsigned long long int arr_7 [18] [18] [18] ;
unsigned int arr_8 [18] [18] [18] ;
unsigned long long int arr_9 [18] [18] [18] [18] [18] [18] ;
signed char arr_11 [18] [18] [18] ;
long long int arr_12 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 11922047363393039444ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 490717660U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8561713704416610772ULL : 11385370569337336460ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)1498;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 150268608664785884LL : 5252014784749023581LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 77098282605575981ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 428270846U : 1176025038U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16449829717915815138ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)112 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -528731841472977753LL : -4859679801509227327LL;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
