#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2047281349U;
signed char var_2 = (signed char)50;
unsigned int var_6 = 2409821513U;
long long int var_9 = 4406373470573549404LL;
unsigned int var_11 = 2687319010U;
int zero = 0;
unsigned char var_12 = (unsigned char)230;
signed char var_13 = (signed char)-114;
int var_14 = 930437538;
void init() {
}

void checksum() {
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
