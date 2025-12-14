#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
int var_3 = -1026279489;
signed char var_4 = (signed char)-113;
unsigned char var_6 = (unsigned char)235;
unsigned char var_7 = (unsigned char)65;
unsigned char var_8 = (unsigned char)79;
signed char var_16 = (signed char)-26;
int zero = 0;
long long int var_17 = -5195794431679988655LL;
short var_18 = (short)-19809;
unsigned int var_19 = 1877564838U;
long long int var_20 = 8173646373579836419LL;
unsigned long long int var_21 = 4543710907624866297ULL;
unsigned int var_22 = 3879112204U;
long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -4500102813955500520LL;
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
