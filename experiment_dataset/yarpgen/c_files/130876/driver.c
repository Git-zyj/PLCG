#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1042836852;
unsigned short var_3 = (unsigned short)64548;
signed char var_5 = (signed char)-77;
signed char var_6 = (signed char)-60;
int var_7 = 585990145;
unsigned long long int var_9 = 904587592721491047ULL;
int zero = 0;
unsigned int var_11 = 6558171U;
unsigned short var_12 = (unsigned short)1411;
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
