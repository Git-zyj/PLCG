#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4065;
_Bool var_5 = (_Bool)0;
long long int var_7 = -9166300407695980179LL;
long long int var_12 = -7034622369970696816LL;
int zero = 0;
unsigned long long int var_13 = 17730211850022705586ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8892546051785456824ULL;
unsigned short var_16 = (unsigned short)14022;
unsigned long long int var_17 = 1849187026071701124ULL;
signed char var_18 = (signed char)86;
short arr_2 [13] ;
unsigned short arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)22698;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)61685;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
