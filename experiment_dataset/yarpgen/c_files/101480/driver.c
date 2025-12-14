#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -333860780;
unsigned long long int var_6 = 6285916635131938582ULL;
unsigned char var_8 = (unsigned char)63;
long long int var_9 = 1926919498815105607LL;
unsigned int var_10 = 466121505U;
int zero = 0;
signed char var_13 = (signed char)51;
unsigned short var_14 = (unsigned short)57014;
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
