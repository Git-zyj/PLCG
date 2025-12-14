#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2392772431U;
unsigned short var_1 = (unsigned short)45116;
int var_2 = 1614981370;
long long int var_3 = 2153913263673021144LL;
long long int var_5 = -2891518407876929322LL;
short var_8 = (short)-29844;
long long int var_10 = 885833518300018426LL;
unsigned short var_11 = (unsigned short)36342;
int zero = 0;
unsigned int var_13 = 360269704U;
unsigned int var_14 = 3830627U;
long long int var_15 = 1520635884549586882LL;
unsigned int var_16 = 1096397910U;
unsigned long long int arr_0 [15] ;
unsigned int arr_1 [15] ;
short arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 6817272450922162623ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2709135219U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-8295;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
