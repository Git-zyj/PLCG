#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57048;
signed char var_1 = (signed char)98;
int var_7 = -539754917;
int var_8 = 1766823943;
signed char var_10 = (signed char)79;
int zero = 0;
unsigned int var_13 = 4008103956U;
unsigned long long int var_14 = 9438679595280779806ULL;
signed char var_15 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
