#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1239178202667228597ULL;
long long int var_1 = -2562036868709759141LL;
unsigned int var_3 = 2088760638U;
unsigned short var_5 = (unsigned short)18318;
unsigned short var_6 = (unsigned short)26423;
unsigned short var_7 = (unsigned short)10806;
unsigned int var_8 = 2771617757U;
unsigned short var_9 = (unsigned short)50206;
signed char var_10 = (signed char)-15;
signed char var_16 = (signed char)57;
signed char var_17 = (signed char)7;
int zero = 0;
signed char var_18 = (signed char)45;
long long int var_19 = 5559857689313494473LL;
unsigned long long int var_20 = 2842912217500736706ULL;
signed char var_21 = (signed char)76;
long long int var_22 = -8187102578947122402LL;
long long int arr_1 [15] [15] ;
long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1393505217601195772LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3849012416127744143LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
