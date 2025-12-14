#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1300417402U;
unsigned long long int var_3 = 15876840136189988751ULL;
signed char var_8 = (signed char)-29;
int var_9 = -1688551078;
unsigned int var_14 = 3573212895U;
int zero = 0;
unsigned char var_15 = (unsigned char)84;
unsigned short var_16 = (unsigned short)22952;
unsigned long long int var_17 = 18311451850709865004ULL;
long long int var_18 = -3150758037386775851LL;
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
