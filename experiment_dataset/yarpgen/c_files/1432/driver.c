#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1696812002;
signed char var_14 = (signed char)22;
unsigned int var_15 = 4021727535U;
long long int var_18 = -5225317731814184439LL;
int zero = 0;
unsigned long long int var_20 = 2499055091938394861ULL;
unsigned char var_21 = (unsigned char)72;
unsigned int var_22 = 3205446110U;
unsigned int var_23 = 3761560995U;
long long int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -1687077604941487888LL : -5965623233621236860LL;
}

void checksum() {
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
