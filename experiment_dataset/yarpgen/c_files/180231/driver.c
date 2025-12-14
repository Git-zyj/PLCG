#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3431466097416354685LL;
long long int var_7 = 6463288193173878968LL;
int zero = 0;
unsigned long long int var_16 = 18391234403328360711ULL;
int var_17 = -1304800876;
long long int var_18 = 3628395851283027301LL;
int var_19 = -1943178355;
int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1688640126 : 184276741;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
