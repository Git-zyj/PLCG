#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1535212612598258577LL;
unsigned int var_1 = 2468402255U;
unsigned long long int var_2 = 14491387448086606895ULL;
unsigned long long int var_3 = 3062452355025472369ULL;
unsigned long long int var_4 = 11379237194149469472ULL;
unsigned long long int var_8 = 15081538453370551544ULL;
int zero = 0;
unsigned long long int var_15 = 13867877392928246481ULL;
unsigned int var_16 = 1026716601U;
unsigned long long int var_17 = 10516522887733507475ULL;
unsigned long long int var_18 = 7642319349286798972ULL;
signed char arr_0 [12] ;
long long int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5028648057214162989LL : 3337393564707877917LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
