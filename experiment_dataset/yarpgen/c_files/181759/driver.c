#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12319351728563307007ULL;
int var_7 = 375341478;
signed char var_9 = (signed char)123;
long long int var_10 = 3499494456871456664LL;
long long int var_12 = -1772718970244630193LL;
signed char var_13 = (signed char)44;
int zero = 0;
unsigned int var_16 = 66894430U;
unsigned short var_17 = (unsigned short)17867;
long long int var_18 = 7393666195593150792LL;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)30819;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
