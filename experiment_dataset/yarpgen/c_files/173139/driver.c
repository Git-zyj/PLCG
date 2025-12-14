#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)60081;
unsigned int var_4 = 2004814852U;
unsigned int var_6 = 286801959U;
unsigned int var_7 = 789995758U;
unsigned long long int var_8 = 8602466162255482143ULL;
unsigned int var_9 = 659656327U;
long long int var_10 = -3698791175347606231LL;
int zero = 0;
long long int var_12 = -1682740042798892660LL;
unsigned short var_13 = (unsigned short)61927;
void init() {
}

void checksum() {
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
