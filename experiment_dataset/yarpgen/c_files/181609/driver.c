#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3958258389U;
int var_4 = -1715527785;
unsigned char var_8 = (unsigned char)230;
unsigned int var_9 = 1184137312U;
int zero = 0;
long long int var_10 = 9015990512004435466LL;
short var_11 = (short)24100;
long long int var_12 = 5449071374551086123LL;
unsigned long long int var_13 = 14793003397732149833ULL;
unsigned int arr_9 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1554477705U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
