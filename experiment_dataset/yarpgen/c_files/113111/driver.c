#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
signed char var_1 = (signed char)-68;
signed char var_3 = (signed char)87;
long long int var_6 = -9056776130157026970LL;
signed char var_7 = (signed char)103;
signed char var_8 = (signed char)-64;
int var_10 = -1951384702;
int var_11 = -10603470;
unsigned long long int var_14 = 17782457169662615037ULL;
unsigned long long int var_15 = 6584863444818764314ULL;
unsigned int var_16 = 38494018U;
signed char var_17 = (signed char)-20;
int zero = 0;
unsigned short var_18 = (unsigned short)40537;
signed char var_19 = (signed char)-116;
signed char var_20 = (signed char)-69;
signed char var_21 = (signed char)-6;
unsigned short var_22 = (unsigned short)43026;
signed char var_23 = (signed char)-69;
unsigned short arr_0 [10] ;
signed char arr_1 [10] ;
unsigned long long int arr_2 [10] ;
int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)35415;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4761506966856838597ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1878647351;
}

void checksum() {
    hash(&seed, var_18);
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
