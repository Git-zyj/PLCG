#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11042835181820031400ULL;
unsigned char var_3 = (unsigned char)120;
unsigned char var_4 = (unsigned char)5;
unsigned short var_10 = (unsigned short)9564;
signed char var_12 = (signed char)-11;
unsigned short var_14 = (unsigned short)64729;
unsigned long long int var_15 = 2996267938207316511ULL;
unsigned long long int var_16 = 1315130222122275445ULL;
int zero = 0;
unsigned long long int var_18 = 11812624058246245714ULL;
unsigned short var_19 = (unsigned short)57149;
short var_20 = (short)-8924;
unsigned long long int var_21 = 15642842204147301651ULL;
unsigned long long int arr_1 [17] ;
signed char arr_5 [17] [17] ;
_Bool arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 11703359886611971691ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
