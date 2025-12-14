#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3331827581974499999LL;
unsigned char var_3 = (unsigned char)35;
unsigned char var_8 = (unsigned char)18;
signed char var_12 = (signed char)17;
int zero = 0;
int var_20 = -911227307;
unsigned long long int var_21 = 4744978944095875130ULL;
signed char var_22 = (signed char)-76;
unsigned short var_23 = (unsigned short)8668;
unsigned int var_24 = 3884621763U;
unsigned long long int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 822603193036743330ULL : 1654071967652428413ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
