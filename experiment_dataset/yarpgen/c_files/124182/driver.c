#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
long long int var_5 = -1460976373980035841LL;
long long int var_7 = 1539755162692240854LL;
int zero = 0;
signed char var_12 = (signed char)-67;
signed char var_13 = (signed char)-3;
long long int var_14 = 3342843207575995269LL;
signed char var_15 = (signed char)113;
long long int arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 5436770817792491294LL;
}

void checksum() {
    hash(&seed, var_12);
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
