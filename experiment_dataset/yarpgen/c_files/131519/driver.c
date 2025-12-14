#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21730;
unsigned char var_1 = (unsigned char)91;
short var_2 = (short)-79;
unsigned short var_3 = (unsigned short)31882;
short var_4 = (short)9560;
long long int var_5 = 9095460691712136866LL;
unsigned short var_7 = (unsigned short)12475;
_Bool var_11 = (_Bool)0;
long long int var_12 = 6041960385103979671LL;
unsigned long long int var_15 = 13654463646557322543ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_19 = 1121506246611616504LL;
unsigned char var_20 = (unsigned char)24;
long long int var_21 = 2074413225311324633LL;
unsigned char var_22 = (unsigned char)8;
long long int var_23 = 465382265057706713LL;
int arr_4 [25] ;
unsigned short arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -338185865 : -803109837;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)5873 : (unsigned short)45879;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
