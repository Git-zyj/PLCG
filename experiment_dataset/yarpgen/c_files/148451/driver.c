#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1184763381;
unsigned char var_1 = (unsigned char)158;
unsigned char var_4 = (unsigned char)0;
short var_5 = (short)23206;
int var_6 = -681721637;
unsigned short var_7 = (unsigned short)27113;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = 610784764;
int var_11 = 1231214265;
unsigned long long int var_12 = 2710261715837454752ULL;
int var_13 = 1634217154;
short var_14 = (short)26067;
long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -6642535363086112870LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
