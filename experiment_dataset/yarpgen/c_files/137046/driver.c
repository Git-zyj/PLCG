#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16462770973252264749ULL;
unsigned long long int var_1 = 1877630060869119416ULL;
_Bool var_5 = (_Bool)0;
long long int var_9 = 3094329755179368311LL;
unsigned long long int var_12 = 2389964329541103469ULL;
int zero = 0;
unsigned long long int var_20 = 7018113518138651701ULL;
signed char var_21 = (signed char)-6;
unsigned long long int var_22 = 890691353897510917ULL;
signed char var_23 = (signed char)-50;
unsigned long long int var_24 = 12402819167997572712ULL;
_Bool arr_2 [25] [25] [25] ;
long long int arr_11 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -1938221845473674952LL;
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
