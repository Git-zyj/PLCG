#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1456447936;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-23621;
short var_4 = (short)31862;
unsigned long long int var_5 = 13815942328270036529ULL;
short var_6 = (short)-23533;
unsigned char var_7 = (unsigned char)193;
long long int var_8 = 7808664126956892849LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 5634062323591847400LL;
long long int var_12 = -5950182795686170630LL;
short var_13 = (short)10741;
short var_14 = (short)-30228;
int var_15 = -768904669;
unsigned long long int arr_2 [25] [25] [25] ;
long long int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 10679772924312848487ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -6283304355465409168LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
