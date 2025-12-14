#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)3520;
unsigned long long int var_5 = 4097960486514054981ULL;
unsigned int var_6 = 967785273U;
short var_7 = (short)19659;
long long int var_8 = -5787426013349754291LL;
unsigned long long int var_9 = 4331393319318376860ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)120;
unsigned long long int var_12 = 5672398659845517450ULL;
short var_13 = (short)23661;
int var_14 = 1437526678;
unsigned char var_15 = (unsigned char)13;
long long int arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -6379597360485970594LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
