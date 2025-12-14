#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8473972228405657975ULL;
unsigned long long int var_2 = 15989483759537411317ULL;
unsigned long long int var_3 = 17622840518101114934ULL;
unsigned int var_7 = 1708884943U;
int var_9 = -411971658;
unsigned short var_11 = (unsigned short)23726;
unsigned int var_14 = 933076848U;
long long int var_17 = 4242998866297723193LL;
int zero = 0;
short var_18 = (short)-28831;
unsigned int var_19 = 2991377673U;
short var_20 = (short)3405;
unsigned short arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41206 : (unsigned short)4792;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
