#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7952680289639935580ULL;
int var_4 = 682109253;
signed char var_6 = (signed char)-86;
unsigned short var_8 = (unsigned short)19140;
short var_9 = (short)20757;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)73;
unsigned long long int var_13 = 6458850080123655528ULL;
int var_14 = 324173541;
int var_15 = 306329993;
long long int arr_2 [16] [16] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 3164217718339648083LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2092525181;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
