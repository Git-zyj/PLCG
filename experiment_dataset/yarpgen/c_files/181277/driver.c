#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1176011473889443666ULL;
int var_2 = 2076874165;
signed char var_5 = (signed char)-79;
unsigned long long int var_6 = 3921910642606906486ULL;
short var_9 = (short)-15755;
int zero = 0;
short var_10 = (short)-20322;
unsigned long long int var_11 = 2797668003697711167ULL;
signed char var_12 = (signed char)-78;
signed char var_13 = (signed char)-55;
unsigned int var_14 = 1911870186U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
