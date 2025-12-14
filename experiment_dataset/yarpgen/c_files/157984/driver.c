#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)26888;
unsigned char var_7 = (unsigned char)213;
signed char var_9 = (signed char)-1;
int zero = 0;
unsigned long long int var_10 = 6508987902453105141ULL;
unsigned long long int var_11 = 15644176517938272015ULL;
signed char var_12 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
