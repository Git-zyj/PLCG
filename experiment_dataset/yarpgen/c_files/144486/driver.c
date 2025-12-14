#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2828791479U;
unsigned char var_5 = (unsigned char)97;
unsigned int var_17 = 3425008640U;
int zero = 0;
unsigned char var_18 = (unsigned char)147;
long long int var_19 = -6803794282077932449LL;
unsigned int var_20 = 3076641111U;
signed char var_21 = (signed char)-17;
unsigned char arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)172;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
