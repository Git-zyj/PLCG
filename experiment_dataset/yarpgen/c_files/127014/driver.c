#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7824172532732123213LL;
long long int var_2 = -6057824395032939272LL;
long long int var_15 = 8755281124878837396LL;
int zero = 0;
long long int var_17 = -349355956251411161LL;
long long int var_18 = 7250165042691201920LL;
long long int var_19 = 4420419434280594894LL;
long long int var_20 = 6702633775524476175LL;
long long int arr_2 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -900134146942020477LL : -5076158676818759827LL;
}

void checksum() {
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
