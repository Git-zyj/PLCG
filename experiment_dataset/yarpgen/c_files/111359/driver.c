#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
unsigned char var_5 = (unsigned char)172;
unsigned char var_6 = (unsigned char)225;
short var_8 = (short)-5301;
long long int var_10 = -4163855111590007307LL;
int zero = 0;
signed char var_12 = (signed char)-73;
signed char var_13 = (signed char)-48;
long long int var_14 = 5771399286991850197LL;
long long int var_15 = 3056303544681512986LL;
unsigned int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 3845803128U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
