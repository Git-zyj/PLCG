#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1866807152;
int var_7 = 1145082051;
unsigned char var_8 = (unsigned char)95;
signed char var_9 = (signed char)-14;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-36;
unsigned int var_13 = 3302753248U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
