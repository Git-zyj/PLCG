#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1746;
unsigned int var_1 = 2146011143U;
signed char var_8 = (signed char)-108;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 3424934318780586906ULL;
unsigned int var_12 = 3091452234U;
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
