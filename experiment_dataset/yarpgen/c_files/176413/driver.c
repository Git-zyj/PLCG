#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-5;
unsigned int var_3 = 2498743451U;
unsigned int var_7 = 2437229398U;
unsigned long long int var_9 = 12206140532887045674ULL;
signed char var_10 = (signed char)-89;
int zero = 0;
signed char var_18 = (signed char)-6;
unsigned char var_19 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
