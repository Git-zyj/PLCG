#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36604;
signed char var_1 = (signed char)40;
short var_2 = (short)22150;
unsigned int var_8 = 2343522106U;
unsigned short var_9 = (unsigned short)60233;
int zero = 0;
short var_10 = (short)26993;
int var_11 = -534945766;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
