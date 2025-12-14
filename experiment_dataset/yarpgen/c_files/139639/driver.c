#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1935167264;
short var_9 = (short)30217;
unsigned int var_10 = 3149390381U;
unsigned short var_11 = (unsigned short)4527;
unsigned long long int var_13 = 14722156462783815727ULL;
unsigned long long int var_17 = 10631753296137101577ULL;
unsigned long long int var_18 = 13405382425203327452ULL;
int zero = 0;
unsigned long long int var_19 = 15577053885076652934ULL;
_Bool var_20 = (_Bool)0;
int var_21 = 456014636;
signed char var_22 = (signed char)-82;
int arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2030633226;
}

void checksum() {
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
