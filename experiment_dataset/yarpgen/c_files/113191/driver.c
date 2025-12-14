#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2502296188U;
unsigned short var_1 = (unsigned short)6566;
unsigned int var_6 = 1830885947U;
unsigned long long int var_7 = 7105584446712495710ULL;
signed char var_8 = (signed char)-78;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -5259939335523275498LL;
signed char var_14 = (signed char)117;
unsigned long long int var_15 = 3914938280634547484ULL;
long long int var_16 = -298987553349039048LL;
void init() {
}

void checksum() {
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
