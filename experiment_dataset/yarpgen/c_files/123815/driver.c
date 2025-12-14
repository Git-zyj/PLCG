#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3406699899U;
unsigned long long int var_6 = 17512728384139184985ULL;
unsigned char var_9 = (unsigned char)145;
unsigned long long int var_11 = 6771938193376568536ULL;
unsigned long long int var_12 = 18213756987150276375ULL;
int zero = 0;
unsigned long long int var_13 = 3104171881041810352ULL;
signed char var_14 = (signed char)-81;
void init() {
}

void checksum() {
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
