#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14156255960873721544ULL;
unsigned short var_4 = (unsigned short)38148;
unsigned int var_9 = 3786487832U;
int zero = 0;
unsigned short var_11 = (unsigned short)28276;
unsigned char var_12 = (unsigned char)253;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
