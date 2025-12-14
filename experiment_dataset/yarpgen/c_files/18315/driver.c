#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1041490466U;
unsigned int var_5 = 2899801614U;
unsigned int var_9 = 3071840050U;
unsigned int var_11 = 578157005U;
unsigned int var_13 = 2581135485U;
unsigned int var_14 = 2024092246U;
unsigned int var_15 = 902090634U;
int zero = 0;
unsigned int var_17 = 2885404456U;
unsigned int var_18 = 3917862848U;
unsigned int var_19 = 2594882665U;
unsigned int var_20 = 1181555391U;
unsigned int var_21 = 1605965603U;
unsigned int var_22 = 10553099U;
unsigned int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2259438457U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
