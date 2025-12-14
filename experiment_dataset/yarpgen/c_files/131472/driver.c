#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1374276530U;
unsigned int var_4 = 3788572089U;
unsigned int var_12 = 2066063085U;
int zero = 0;
unsigned int var_18 = 1169549625U;
unsigned int var_19 = 1827372597U;
unsigned int var_20 = 3721265275U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
