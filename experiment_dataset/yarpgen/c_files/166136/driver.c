#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1631259220;
unsigned int var_1 = 106651994U;
short var_2 = (short)6305;
short var_7 = (short)30248;
unsigned long long int var_8 = 10825771622252804407ULL;
unsigned int var_9 = 898367252U;
int zero = 0;
unsigned short var_10 = (unsigned short)46845;
long long int var_11 = 5907157248393452076LL;
unsigned int var_12 = 22565883U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
