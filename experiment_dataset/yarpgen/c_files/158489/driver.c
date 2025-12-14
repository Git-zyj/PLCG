#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -2081719766;
unsigned char var_2 = (unsigned char)88;
unsigned char var_3 = (unsigned char)202;
long long int var_4 = -6034542206320977217LL;
unsigned long long int var_7 = 7619626666674974180ULL;
short var_8 = (short)32744;
unsigned int var_9 = 3331843244U;
int zero = 0;
unsigned char var_10 = (unsigned char)13;
unsigned char var_11 = (unsigned char)220;
unsigned int var_12 = 2137616266U;
unsigned char var_13 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
