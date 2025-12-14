#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
int var_2 = 14994204;
unsigned int var_3 = 3610149981U;
signed char var_5 = (signed char)114;
unsigned int var_6 = 3607002208U;
unsigned char var_7 = (unsigned char)144;
unsigned char var_10 = (unsigned char)246;
int var_12 = -1704527898;
signed char var_15 = (signed char)-72;
int zero = 0;
signed char var_20 = (signed char)-109;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)14;
short var_23 = (short)-28380;
unsigned int var_24 = 1806069078U;
unsigned char var_25 = (unsigned char)197;
long long int arr_0 [14] ;
long long int arr_1 [14] ;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -4344543366718764216LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -482202589197567951LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
