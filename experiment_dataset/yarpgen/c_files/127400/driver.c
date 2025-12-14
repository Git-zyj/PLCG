#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)25422;
unsigned short var_13 = (unsigned short)49904;
long long int var_16 = -1454334986789920130LL;
int zero = 0;
unsigned long long int var_17 = 11984829633023505592ULL;
unsigned int var_18 = 3876463162U;
long long int var_19 = 2019474267928135948LL;
long long int var_20 = -4809768241322441672LL;
unsigned int var_21 = 2616679878U;
long long int var_22 = -8882604533091118135LL;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)96;
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
