#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)83;
unsigned int var_4 = 2847412096U;
unsigned short var_5 = (unsigned short)2732;
long long int var_7 = -5253739330078086289LL;
long long int var_9 = 3123331066554774257LL;
unsigned int var_11 = 2251423590U;
int zero = 0;
unsigned int var_12 = 1437508475U;
short var_13 = (short)11703;
unsigned int var_14 = 1902221301U;
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
