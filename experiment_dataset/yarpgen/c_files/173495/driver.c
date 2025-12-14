#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
unsigned char var_2 = (unsigned char)23;
unsigned long long int var_3 = 14518081381310537931ULL;
short var_7 = (short)-15224;
long long int var_12 = 4679539062916726283LL;
unsigned long long int var_15 = 13040852109862787111ULL;
int zero = 0;
signed char var_18 = (signed char)80;
signed char var_19 = (signed char)41;
signed char var_20 = (signed char)-34;
_Bool arr_1 [12] ;
long long int arr_4 [12] ;
_Bool arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 5849201457787621793LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
