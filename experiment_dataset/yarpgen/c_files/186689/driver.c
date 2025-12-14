#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 13609747343026719259ULL;
unsigned char var_7 = (unsigned char)8;
int var_8 = 767409648;
unsigned char var_13 = (unsigned char)55;
unsigned long long int var_17 = 6421114374436065511ULL;
int zero = 0;
int var_19 = -359960708;
unsigned int var_20 = 618385453U;
void init() {
}

void checksum() {
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
