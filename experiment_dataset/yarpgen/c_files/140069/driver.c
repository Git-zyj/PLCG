#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-102;
unsigned long long int var_5 = 4344048121282728445ULL;
unsigned char var_6 = (unsigned char)130;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)215;
unsigned long long int var_9 = 11241127304058867362ULL;
unsigned short var_10 = (unsigned short)22683;
unsigned short var_12 = (unsigned short)27423;
unsigned long long int var_13 = 14075562437963798073ULL;
int var_14 = 605856828;
unsigned long long int var_15 = 3252562932514612160ULL;
int zero = 0;
unsigned long long int var_16 = 14502349284747978904ULL;
unsigned short var_17 = (unsigned short)59430;
long long int var_18 = -3742914400708447438LL;
int var_19 = -1348717629;
unsigned long long int arr_0 [13] [13] ;
unsigned char arr_2 [13] [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 3943926650628065711ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8557862351188143543ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
