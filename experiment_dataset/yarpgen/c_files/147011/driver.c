#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9397;
short var_3 = (short)9036;
unsigned char var_5 = (unsigned char)246;
signed char var_6 = (signed char)79;
unsigned long long int var_9 = 2413891268906387495ULL;
long long int var_11 = -502650401148529318LL;
long long int var_13 = 4330179633550865200LL;
signed char var_17 = (signed char)-114;
int zero = 0;
signed char var_20 = (signed char)-125;
unsigned short var_21 = (unsigned short)24222;
int var_22 = 1841159439;
_Bool var_23 = (_Bool)1;
unsigned short arr_2 [10] ;
short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)36144;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)27536;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
