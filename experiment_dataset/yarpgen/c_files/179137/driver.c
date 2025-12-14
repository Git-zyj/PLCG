#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3043048996U;
unsigned int var_6 = 41855449U;
unsigned int var_7 = 687338284U;
signed char var_9 = (signed char)-106;
int zero = 0;
signed char var_10 = (signed char)119;
signed char var_11 = (signed char)-2;
signed char var_12 = (signed char)75;
int var_13 = -504391944;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
