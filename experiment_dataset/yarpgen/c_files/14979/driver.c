#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5817720918504095202ULL;
int var_1 = 1504510570;
unsigned short var_3 = (unsigned short)24547;
unsigned long long int var_7 = 15295410286071689363ULL;
short var_8 = (short)-27580;
signed char var_9 = (signed char)-7;
int zero = 0;
int var_11 = -296255121;
signed char var_12 = (signed char)-8;
void init() {
}

void checksum() {
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
