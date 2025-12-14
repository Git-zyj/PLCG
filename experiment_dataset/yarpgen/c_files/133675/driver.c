#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4094756130U;
unsigned int var_1 = 2398275380U;
unsigned int var_3 = 1778165095U;
unsigned int var_4 = 2918476187U;
unsigned int var_5 = 15045849U;
unsigned int var_6 = 1236070444U;
unsigned int var_11 = 1397221429U;
int zero = 0;
unsigned int var_12 = 3229122024U;
unsigned int var_13 = 3105702825U;
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
