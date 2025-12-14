#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50432;
unsigned int var_5 = 2801690875U;
long long int var_6 = -9126133272138008503LL;
unsigned long long int var_9 = 1170786855879163752ULL;
unsigned short var_10 = (unsigned short)64660;
int zero = 0;
long long int var_15 = -435909958392070160LL;
signed char var_16 = (signed char)-29;
unsigned long long int var_17 = 7853818891278666899ULL;
void init() {
}

void checksum() {
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
