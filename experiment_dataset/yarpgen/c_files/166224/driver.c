#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 225724625523954757LL;
unsigned int var_8 = 2556836341U;
unsigned char var_10 = (unsigned char)239;
int zero = 0;
unsigned long long int var_19 = 6294710704916560946ULL;
short var_20 = (short)19134;
unsigned char var_21 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
