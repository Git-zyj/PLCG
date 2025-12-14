#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7794965942668990945LL;
long long int var_5 = 3582364660314390456LL;
long long int var_6 = 8613917675079269317LL;
int zero = 0;
long long int var_13 = 1672157050871012338LL;
long long int var_14 = 3793333888808879096LL;
long long int var_15 = -7890960118542517671LL;
long long int arr_0 [10] ;
long long int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -2474190144207793978LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -8392402906407945506LL;
}

void checksum() {
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
