#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3632203287U;
long long int var_4 = -8424182119936896528LL;
unsigned long long int var_6 = 7973465619514654434ULL;
signed char var_7 = (signed char)-81;
signed char var_12 = (signed char)-80;
unsigned int var_13 = 1358217586U;
int zero = 0;
unsigned char var_15 = (unsigned char)244;
unsigned char var_16 = (unsigned char)147;
unsigned char var_17 = (unsigned char)195;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
