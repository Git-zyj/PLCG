#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32467;
short var_2 = (short)-13509;
int var_3 = 349614412;
unsigned char var_7 = (unsigned char)14;
unsigned long long int var_8 = 514717883910966959ULL;
long long int var_9 = 3655534627885368516LL;
int zero = 0;
int var_10 = -310052658;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 399910292U;
short var_13 = (short)-12543;
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
