#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -86508172;
unsigned short var_7 = (unsigned short)38424;
long long int var_9 = 4209714112632338900LL;
unsigned long long int var_11 = 547426796400237821ULL;
unsigned long long int var_13 = 8377749821267127797ULL;
int zero = 0;
short var_20 = (short)21720;
unsigned char var_21 = (unsigned char)189;
int var_22 = -463052129;
short var_23 = (short)21421;
_Bool var_24 = (_Bool)0;
unsigned char arr_0 [10] ;
long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 5824226623210976121LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
