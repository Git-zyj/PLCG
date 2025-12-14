#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20722;
unsigned long long int var_8 = 15627612283269393438ULL;
short var_9 = (short)-10598;
unsigned long long int var_10 = 8929070985301984622ULL;
unsigned long long int var_11 = 6914464920049504385ULL;
unsigned short var_15 = (unsigned short)14856;
int zero = 0;
int var_18 = 525476900;
signed char var_19 = (signed char)-13;
unsigned int var_20 = 329207993U;
int var_21 = -335808931;
unsigned long long int var_22 = 10797827515230028424ULL;
unsigned char var_23 = (unsigned char)97;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)27480;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
