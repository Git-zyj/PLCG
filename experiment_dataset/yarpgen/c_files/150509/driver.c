#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5944;
short var_1 = (short)31839;
long long int var_3 = -7022379091452665318LL;
int var_5 = 1182537204;
unsigned int var_7 = 3891150456U;
unsigned char var_12 = (unsigned char)163;
_Bool var_13 = (_Bool)1;
int var_17 = -1500777158;
unsigned long long int var_18 = 9339641613862471344ULL;
int zero = 0;
short var_19 = (short)831;
int var_20 = -229856335;
int var_21 = -329575706;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)195;
signed char arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-8;
}

void checksum() {
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
