#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -239646311;
short var_3 = (short)27658;
unsigned long long int var_7 = 5536007922609547451ULL;
long long int var_9 = 1003192641244521702LL;
int var_11 = -1322434452;
long long int var_16 = -8243923066606607542LL;
int zero = 0;
int var_19 = 1762411091;
short var_20 = (short)-24091;
unsigned int var_21 = 3350886838U;
long long int var_22 = 3463426163032838574LL;
int var_23 = -1993351353;
signed char var_24 = (signed char)71;
short arr_4 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (short)-749;
}

void checksum() {
    hash(&seed, var_19);
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
