#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13806;
unsigned int var_2 = 202498895U;
unsigned long long int var_3 = 3146891798396709941ULL;
unsigned int var_4 = 1283714062U;
long long int var_5 = 487818916713689791LL;
unsigned short var_6 = (unsigned short)2374;
long long int var_7 = 2488308146493289650LL;
unsigned short var_8 = (unsigned short)50864;
unsigned char var_9 = (unsigned char)156;
unsigned short var_10 = (unsigned short)1880;
short var_11 = (short)11812;
int zero = 0;
short var_13 = (short)1700;
unsigned short var_14 = (unsigned short)43509;
int var_15 = 266073621;
unsigned long long int var_16 = 9563616198969282965ULL;
unsigned long long int var_17 = 15140533604896808769ULL;
long long int var_18 = 8535429405760704971LL;
unsigned char var_19 = (unsigned char)116;
unsigned short var_20 = (unsigned short)51148;
unsigned char var_21 = (unsigned char)32;
short var_22 = (short)5704;
short arr_0 [18] ;
unsigned int arr_1 [18] ;
long long int arr_2 [18] [18] [18] ;
unsigned int arr_3 [18] ;
unsigned int arr_10 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-9581;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2807924566U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3314520113151493078LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 959056800U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2797542273U : 1298629779U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
