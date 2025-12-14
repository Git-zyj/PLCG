#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3494159736265697300ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)118;
unsigned int var_9 = 684469343U;
int zero = 0;
unsigned long long int var_10 = 10110409056200801064ULL;
unsigned int var_11 = 17508592U;
int var_12 = 1392089998;
unsigned char var_13 = (unsigned char)119;
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
