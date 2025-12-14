#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1130250993;
int var_8 = -1351261090;
int var_9 = -1677127407;
unsigned long long int var_10 = 8984736126537115188ULL;
long long int var_12 = 7086771084871857068LL;
int var_14 = -1025041085;
int zero = 0;
signed char var_19 = (signed char)47;
unsigned char var_20 = (unsigned char)231;
signed char var_21 = (signed char)126;
int var_22 = 86700827;
int var_23 = 1134138142;
short arr_0 [13] [13] ;
short arr_1 [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31900;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-14523;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 435106049;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
