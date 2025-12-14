#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)108;
unsigned int var_8 = 3996895999U;
unsigned int var_10 = 2277435949U;
unsigned int var_12 = 3378503954U;
signed char var_18 = (signed char)112;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)42;
unsigned short var_21 = (unsigned short)28006;
unsigned int var_22 = 2490958121U;
void init() {
}

void checksum() {
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
