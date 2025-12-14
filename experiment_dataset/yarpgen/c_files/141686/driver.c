#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5970226157188352307ULL;
unsigned int var_3 = 3424413504U;
unsigned int var_5 = 562970422U;
signed char var_9 = (signed char)61;
unsigned short var_10 = (unsigned short)50845;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 4077774753596216958ULL;
int zero = 0;
unsigned long long int var_19 = 4755335049079216688ULL;
unsigned int var_20 = 2232951362U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
