#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21864;
long long int var_3 = -4105369702813401388LL;
int var_5 = 1647697335;
unsigned int var_7 = 828158109U;
unsigned int var_9 = 589781116U;
int zero = 0;
unsigned short var_10 = (unsigned short)27114;
unsigned short var_11 = (unsigned short)44729;
unsigned long long int var_12 = 2624275034283590005ULL;
unsigned long long int var_13 = 6708361845960136191ULL;
signed char arr_0 [17] ;
unsigned char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)221;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
