#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2324632496U;
long long int var_1 = -4591551607938624199LL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)56365;
unsigned short var_9 = (unsigned short)782;
unsigned long long int var_11 = 2238705707334411586ULL;
int zero = 0;
unsigned long long int var_12 = 3837179222345372714ULL;
unsigned long long int var_13 = 15482668953224224860ULL;
unsigned char var_14 = (unsigned char)140;
unsigned int var_15 = 3331765906U;
void init() {
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
