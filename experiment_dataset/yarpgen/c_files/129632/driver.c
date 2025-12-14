#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_8 = (signed char)94;
unsigned int var_9 = 4026515766U;
signed char var_11 = (signed char)-88;
signed char var_12 = (signed char)89;
int zero = 0;
unsigned char var_13 = (unsigned char)5;
unsigned long long int var_14 = 16660724108782381328ULL;
unsigned long long int var_15 = 2852201203789325866ULL;
unsigned char var_16 = (unsigned char)95;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
