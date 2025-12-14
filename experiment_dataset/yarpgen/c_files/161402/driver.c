#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2922090597889897175LL;
long long int var_3 = -8918520275184840404LL;
signed char var_9 = (signed char)-62;
signed char var_10 = (signed char)-5;
int var_11 = -1806445809;
int zero = 0;
unsigned char var_12 = (unsigned char)63;
long long int var_13 = -9196988115162741105LL;
long long int var_14 = 1271073491330022743LL;
signed char var_15 = (signed char)-89;
signed char var_16 = (signed char)79;
unsigned long long int arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4888545696334388123ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
