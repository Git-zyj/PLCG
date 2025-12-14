#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4358813184780288780LL;
long long int var_3 = -9184280136736542655LL;
unsigned long long int var_6 = 2237013889090214097ULL;
long long int var_8 = 577214819746769402LL;
unsigned char var_11 = (unsigned char)118;
unsigned long long int var_15 = 13074535151792495096ULL;
int zero = 0;
short var_17 = (short)6119;
int var_18 = -349514552;
long long int var_19 = -4204010900801290176LL;
long long int var_20 = -6590252438720966243LL;
unsigned long long int var_21 = 306974897937811079ULL;
long long int var_22 = 836473876177359541LL;
signed char var_23 = (signed char)-66;
int arr_10 [23] [23] ;
int arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 498219842 : -1788556399;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 195234099 : -254512771;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
