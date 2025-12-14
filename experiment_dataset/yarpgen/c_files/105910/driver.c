#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3832421910U;
unsigned int var_3 = 146007764U;
short var_4 = (short)-22137;
unsigned int var_5 = 3349557649U;
unsigned short var_7 = (unsigned short)4174;
unsigned long long int var_9 = 4775315657895813865ULL;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
unsigned char var_12 = (unsigned char)218;
int var_13 = -1830333803;
long long int var_14 = 6757508677162900430LL;
short var_15 = (short)8667;
int arr_2 [24] [24] ;
int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -1301424535;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1030451434;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
