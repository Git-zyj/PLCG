#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3040410312U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-74;
unsigned short var_9 = (unsigned short)52403;
short var_10 = (short)-5916;
long long int var_11 = -711476000140974723LL;
signed char var_15 = (signed char)-120;
short var_16 = (short)-2236;
int zero = 0;
unsigned char var_17 = (unsigned char)167;
unsigned long long int var_18 = 13243908264556864329ULL;
unsigned long long int var_19 = 3065671700929362018ULL;
unsigned short var_20 = (unsigned short)18872;
unsigned short arr_0 [19] [19] ;
int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)21556;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1513251993 : -1902015820;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
