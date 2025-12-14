#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16114672780868882805ULL;
unsigned long long int var_5 = 3586595790752600883ULL;
unsigned long long int var_11 = 14983680490101667737ULL;
unsigned long long int var_12 = 13333915209405161748ULL;
unsigned long long int var_14 = 15574860452025848120ULL;
int zero = 0;
unsigned long long int var_15 = 12010701913295553881ULL;
unsigned long long int var_16 = 2283668280257395604ULL;
unsigned long long int var_17 = 12829718400335752439ULL;
unsigned long long int var_18 = 8951590063767017655ULL;
unsigned long long int arr_4 [19] [19] [19] ;
unsigned long long int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 251327118767520675ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 10887036684421105532ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
