#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3333881788U;
unsigned int var_2 = 3569711618U;
unsigned int var_3 = 3109526135U;
unsigned int var_4 = 2710036633U;
unsigned int var_5 = 3020546216U;
unsigned int var_8 = 3196443495U;
unsigned int var_9 = 4099567542U;
unsigned int var_10 = 3799795324U;
unsigned int var_12 = 1198926206U;
unsigned int var_13 = 3733025011U;
unsigned int var_14 = 3632631847U;
int zero = 0;
unsigned int var_15 = 2548064071U;
unsigned int var_16 = 1512382574U;
unsigned int var_17 = 1371203415U;
unsigned int var_18 = 386783485U;
unsigned int var_19 = 3426930848U;
unsigned int var_20 = 590666806U;
unsigned int arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2891443205U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
