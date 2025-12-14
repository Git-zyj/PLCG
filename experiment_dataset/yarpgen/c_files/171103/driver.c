#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17477;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 7060152683513135364ULL;
signed char var_16 = (signed char)50;
unsigned int var_17 = 1082512241U;
signed char var_18 = (signed char)-75;
unsigned char var_19 = (unsigned char)81;
unsigned long long int var_20 = 9952997759542134640ULL;
int var_21 = -621577246;
unsigned short arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)23047;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
