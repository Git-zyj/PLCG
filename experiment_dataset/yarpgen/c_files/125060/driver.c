#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)71;
unsigned short var_4 = (unsigned short)40080;
long long int var_9 = 4180741651096444590LL;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)45314;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int var_16 = -412431806;
int zero = 0;
unsigned short var_17 = (unsigned short)27596;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)231;
unsigned long long int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2867788187896058934ULL : 10170202845363360722ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
