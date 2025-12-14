#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)100;
unsigned long long int var_4 = 6961316821602345351ULL;
signed char var_6 = (signed char)-67;
unsigned long long int var_7 = 7206968645480100004ULL;
signed char var_8 = (signed char)14;
int zero = 0;
unsigned long long int var_10 = 3415133932355589498ULL;
unsigned long long int var_11 = 16077043078183949738ULL;
signed char var_12 = (signed char)-27;
unsigned long long int var_13 = 3259852990208088979ULL;
signed char var_14 = (signed char)-27;
unsigned long long int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [24] [24] ;
unsigned long long int arr_3 [24] ;
unsigned long long int arr_4 [24] ;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 10780600408856009097ULL : 11812884786577489522ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 8825191010325342649ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 16272726739546646520ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 6300390389797562579ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 13260244165868278220ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 9913022783642096627ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 13553917597066727772ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
