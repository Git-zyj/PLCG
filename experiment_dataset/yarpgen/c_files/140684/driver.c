#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1101639957;
unsigned long long int var_4 = 17762935515047866244ULL;
unsigned int var_6 = 2696647087U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-17;
signed char var_11 = (signed char)119;
unsigned long long int var_12 = 9320020998845441283ULL;
unsigned char var_13 = (unsigned char)75;
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
