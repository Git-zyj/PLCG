#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_6 = 417849762;
signed char var_8 = (signed char)-63;
unsigned int var_16 = 1759265069U;
signed char var_18 = (signed char)68;
signed char var_19 = (signed char)-95;
int zero = 0;
unsigned long long int var_20 = 6313478804601706521ULL;
unsigned int var_21 = 3094520695U;
signed char var_22 = (signed char)-90;
int var_23 = -115893952;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
