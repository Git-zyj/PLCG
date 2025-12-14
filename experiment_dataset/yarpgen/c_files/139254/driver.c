#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2215888819U;
int var_1 = 367344556;
_Bool var_2 = (_Bool)0;
unsigned int var_7 = 1512049838U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)216;
signed char var_15 = (signed char)-117;
unsigned int var_16 = 4258305675U;
void init() {
}

void checksum() {
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
