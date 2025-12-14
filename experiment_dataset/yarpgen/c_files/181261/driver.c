#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9062070646906567241LL;
unsigned short var_3 = (unsigned short)14556;
unsigned short var_5 = (unsigned short)60543;
long long int var_9 = -8014194684601562229LL;
int zero = 0;
unsigned int var_13 = 450210U;
unsigned int var_14 = 172199709U;
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
