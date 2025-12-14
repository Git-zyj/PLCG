#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2444973738U;
unsigned char var_13 = (unsigned char)175;
int zero = 0;
unsigned long long int var_20 = 2784607979666995832ULL;
unsigned char var_21 = (unsigned char)121;
int var_22 = -1076109175;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
