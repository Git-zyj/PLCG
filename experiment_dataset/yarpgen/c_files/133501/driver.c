#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 557264965;
int var_3 = -152044293;
int var_6 = 1762183505;
int var_7 = -1564736602;
short var_8 = (short)13318;
short var_9 = (short)10196;
int zero = 0;
int var_10 = 1389739547;
short var_11 = (short)-21490;
int var_12 = 1014795669;
int var_13 = 1563461181;
short var_14 = (short)-729;
short arr_1 [23] ;
short arr_2 [23] ;
int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)10865;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)4475;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -128345304 : 505408011;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
