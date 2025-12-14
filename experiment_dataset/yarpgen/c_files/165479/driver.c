#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3913159075567058411ULL;
unsigned int var_8 = 877852837U;
int var_12 = -315580943;
unsigned int var_13 = 4276257999U;
unsigned int var_17 = 2580023018U;
int zero = 0;
unsigned long long int var_18 = 5578620372539255379ULL;
signed char var_19 = (signed char)-55;
unsigned char var_20 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
