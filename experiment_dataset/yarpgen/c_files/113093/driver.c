#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -474151381;
int var_2 = -1352352366;
int var_4 = -1571578355;
int var_5 = 1445229195;
int zero = 0;
unsigned int var_12 = 2133675294U;
unsigned char var_13 = (unsigned char)237;
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
