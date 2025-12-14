#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)115;
long long int var_8 = 3349369810956050503LL;
_Bool var_9 = (_Bool)0;
short var_11 = (short)17346;
int var_13 = -1388203647;
long long int var_15 = -6610005462099947026LL;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
long long int var_20 = 1322363709807515294LL;
int var_21 = -76259829;
int var_22 = 1871354949;
unsigned int var_23 = 303814009U;
long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 3513789845630617054LL;
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
