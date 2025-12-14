#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64417;
unsigned char var_11 = (unsigned char)208;
signed char var_13 = (signed char)11;
unsigned long long int var_15 = 4389937197247338639ULL;
int var_18 = 1741916215;
int zero = 0;
int var_19 = 2044956571;
unsigned int var_20 = 2775191175U;
_Bool var_21 = (_Bool)0;
int var_22 = -344999593;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
